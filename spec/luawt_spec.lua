-- luawt, Lua bindings for Wt
-- Copyright (c) 2015 Pavel Dolgov and Boris Nagaev
-- See the LICENSE file for terms of use.

describe("luawt", function()

    it("requires main module", function()
        local luawt = require 'luawt'
    end)

    pending("creates simple application", function()
        local luawt = require 'luawt'
        local llthreads2 = require 'llthreads2'
        local thread = llthreads2.new [==[
            local luawt = require 'luawt'
            local wt_config = os.tmpname()
            local file = io.open(wt_config, 'w')
            local config = [=[
                <server>
                    <application-settings location="*">
                        <progressive-bootstrap>
                            true
                        </progressive-bootstrap>
                    </application-settings>
                </server> ]=]
            file:write(config)
            file:close()
            luawt.WServer.WRun {
                code = [[
                    local app, env = ...
                    local luawt = require 'luawt'
                    if luawt.Shared.test then
                        luawt.server:stop()
                    else
                        luawt.Shared.test = 'true'
                        local text = "IP: " .. env:clientAddress()
                        local button = luawt.WPushButton(app:root())
                        button:setText(text)
                    end
                ]],
                port = 56789,
                wt_config = wt_config,
            }
            os.remove(wt_config)
        ]==]
        thread:start()
        os.execute("sleep 2")
        local socket = require 'socket.http'
        local data = socket.request('http://127.0.0.1:56789/')
        assert.truthy(data:match('IP:'))
        -- killing request
        socket.request('http://127.0.0.1:56789/')
        thread:join()
    end)

end)
