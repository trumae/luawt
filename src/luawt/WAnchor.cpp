#include "boost-xtime.hpp"

#include <Wt/WImage>
#include <Wt/WAnchor>
#include <Wt/WContainerWidget>
#include <Wt/WLink>
#include <Wt/WString>

#include "globals.hpp"

static const char* WAnchor_make_args0[] = {NULL};
static const char* WAnchor_make_args1[] = {luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WAnchor_make_args2[] = {"char const *", NULL};
static const char* WAnchor_make_args3[] = {"char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WAnchor_make_args4[] = {"char const *", "char const *", NULL};
static const char* WAnchor_make_args5[] = {"char const *", "char const *", luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* WAnchor_make_args6[] = {"char const *", luawt_typeToStr<Wt::WImage>(), NULL};
static const char* WAnchor_make_args7[] = {"char const *", luawt_typeToStr<Wt::WImage>(), luawt_typeToStr<Wt::WContainerWidget>(), NULL};
static const char* const* const luawt_WAnchor_make_args[] = {WAnchor_make_args0, WAnchor_make_args1, WAnchor_make_args2, WAnchor_make_args3, WAnchor_make_args4, WAnchor_make_args5, WAnchor_make_args6, WAnchor_make_args7, NULL};

int luawt_WAnchor_make(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_make_args);
    if (index == 0) {
    WAnchor * l_result = new WAnchor();
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WAnchor");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 1) {
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 1);
    WAnchor * l_result = new WAnchor(parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 2) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    WAnchor * l_result = new WAnchor(link);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WAnchor");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 3) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 2);
    WAnchor * l_result = new WAnchor(link, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 4) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    WAnchor * l_result = new WAnchor(link, text);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WAnchor");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 5) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WAnchor * l_result = new WAnchor(link, text, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 6) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 2);
    WAnchor * l_result = new WAnchor(link, image);
    MyApplication* app = MyApplication::instance();
    if (!app) {
        delete l_result;
        throw std::logic_error("No WApplication when creating WAnchor");
    }
    app->root()->addWidget(l_result);
    
    luawt_toLua(L, l_result);
    return 1;

    } else if (index == 7) {
    char const * raw1 = lua_tostring(L, 1);
    Wt::WLink link = Wt::WLink(raw1);
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 2);
    Wt::WContainerWidget* parent =
        luawt_checkFromLua<Wt::WContainerWidget>(L, 3);
    WAnchor * l_result = new WAnchor(link, image, parent);
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.make");
    }
}

static const char* WAnchor_wordWrap_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_wordWrap_args[] = {WAnchor_wordWrap_args0, NULL};

int luawt_WAnchor_wordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_wordWrap_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    bool l_result = self->wordWrap();
    lua_pushboolean(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.wordWrap");
    }
}

static const char* WAnchor_setWordWrap_args0[] = {luawt_typeToStr<WAnchor>(), "bool", NULL};
static const char* const* const luawt_WAnchor_setWordWrap_args[] = {WAnchor_setWordWrap_args0, NULL};

int luawt_WAnchor_setWordWrap(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setWordWrap_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    bool wordWrap = lua_toboolean(L, 2);
    self->setWordWrap(wordWrap);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setWordWrap");
    }
}

static const char* WAnchor_setImage_args0[] = {luawt_typeToStr<WAnchor>(), luawt_typeToStr<Wt::WImage>(), NULL};
static const char* const* const luawt_WAnchor_setImage_args[] = {WAnchor_setImage_args0, NULL};

int luawt_WAnchor_setImage(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setImage_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::WImage* image =
        luawt_checkFromLua<Wt::WImage>(L, 2);
    self->setImage(image);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setImage");
    }
}

static const char* WAnchor_text_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_text_args[] = {WAnchor_text_args0, NULL};

int luawt_WAnchor_text(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_text_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::WString const & l_result = self->text();
    lua_pushstring(L, l_result.toUTF8().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.text");
    }
}

static const char* WAnchor_setText_args0[] = {luawt_typeToStr<WAnchor>(), "char const *", NULL};
static const char* const* const luawt_WAnchor_setText_args[] = {WAnchor_setText_args0, NULL};

int luawt_WAnchor_setText(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setText_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WString text = Wt::WString(raw2);
    self->setText(text);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setText");
    }
}

static const char* WAnchor_setLink_args0[] = {luawt_typeToStr<WAnchor>(), "char const *", NULL};
static const char* const* const luawt_WAnchor_setLink_args[] = {WAnchor_setLink_args0, NULL};

int luawt_WAnchor_setLink(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setLink_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    Wt::WLink link = Wt::WLink(raw2);
    self->setLink(link);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setLink");
    }
}

static const char* WAnchor_setTarget_args0[] = {luawt_typeToStr<WAnchor>(), "int", NULL};
static const char* const* const luawt_WAnchor_setTarget_args[] = {WAnchor_setTarget_args0, NULL};

int luawt_WAnchor_setTarget(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setTarget_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::AnchorTarget target = static_cast<Wt::AnchorTarget>(lua_tointeger(L, 2));
    self->setTarget(target);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setTarget");
    }
}

static const char* WAnchor_link_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_link_args[] = {WAnchor_link_args0, NULL};

int luawt_WAnchor_link(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_link_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::WLink const & l_result = self->link();
    lua_pushstring(L, l_result.url().c_str());
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.link");
    }
}

static const char* WAnchor_image_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_image_args[] = {WAnchor_image_args0, NULL};

int luawt_WAnchor_image(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_image_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::WImage * l_result = self->image();
    luawt_toLua(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.image");
    }
}

static const char* WAnchor_setRefInternalPath_args0[] = {luawt_typeToStr<WAnchor>(), "char const *", NULL};
static const char* const* const luawt_WAnchor_setRefInternalPath_args[] = {WAnchor_setRefInternalPath_args0, NULL};

int luawt_WAnchor_setRefInternalPath(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setRefInternalPath_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string path = std::string(raw2);
    self->setRefInternalPath(path);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setRefInternalPath");
    }
}

static const char* WAnchor_setRef_args0[] = {luawt_typeToStr<WAnchor>(), "char const *", NULL};
static const char* const* const luawt_WAnchor_setRef_args[] = {WAnchor_setRef_args0, NULL};

int luawt_WAnchor_setRef(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setRef_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    char const * raw2 = lua_tostring(L, 2);
    std::string url = std::string(raw2);
    self->setRef(url);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setRef");
    }
}

static const char* WAnchor_textFormat_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_textFormat_args[] = {WAnchor_textFormat_args0, NULL};

int luawt_WAnchor_textFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_textFormat_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::TextFormat l_result = self->textFormat();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.textFormat");
    }
}

static const char* WAnchor_setTextFormat_args0[] = {luawt_typeToStr<WAnchor>(), "int", NULL};
static const char* const* const luawt_WAnchor_setTextFormat_args[] = {WAnchor_setTextFormat_args0, NULL};

int luawt_WAnchor_setTextFormat(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_setTextFormat_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::TextFormat format = static_cast<Wt::TextFormat>(lua_tointeger(L, 2));
    self->setTextFormat(format);
    return 0;
    
    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.setTextFormat");
    }
}

static const char* WAnchor_target_args0[] = {luawt_typeToStr<WAnchor>(), NULL};
static const char* const* const luawt_WAnchor_target_args[] = {WAnchor_target_args0, NULL};

int luawt_WAnchor_target(lua_State* L) {
    int index = luawt_getSuitableArgsGroup(L, luawt_WAnchor_target_args);
    WAnchor* self = luawt_checkFromLua<WAnchor>(L, 1);
    if (index == 0) {
    Wt::AnchorTarget l_result = self->target();
    lua_pushinteger(L, l_result);
    return 1;

    } else {
        return luaL_error(L, "Wrong arguments for WAnchor.target");
    }
}

ADD_SIGNAL(scrolled, WAnchor, Wt::WScrollEvent)
ADD_SIGNAL(keyWentDown, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(keyPressed, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(keyWentUp, WAnchor, Wt::WKeyEvent)
ADD_SIGNAL(enterPressed, WAnchor, Wt::NoClass)
ADD_SIGNAL(escapePressed, WAnchor, Wt::NoClass)
ADD_SIGNAL(clicked, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(doubleClicked, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentDown, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentUp, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOut, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWentOver, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseMoved, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseDragged, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(mouseWheel, WAnchor, Wt::WMouseEvent)
ADD_SIGNAL(touchStarted, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(touchEnded, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(touchMoved, WAnchor, Wt::WTouchEvent)
ADD_SIGNAL(gestureStarted, WAnchor, Wt::WGestureEvent)
ADD_SIGNAL(gestureChanged, WAnchor, Wt::WGestureEvent)
ADD_SIGNAL(gestureEnded, WAnchor, Wt::WGestureEvent)

static const luaL_Reg luawt_WAnchor_methods[] = {
    METHOD(WAnchor, setLink),
    METHOD(WAnchor, link),
    METHOD(WAnchor, setRef),
    METHOD(WAnchor, setRefInternalPath),
    //METHOD(WAnchor, ref),
    METHOD(WAnchor, setText),
    METHOD(WAnchor, text),
    METHOD(WAnchor, setWordWrap),
    METHOD(WAnchor, setTextFormat),
    METHOD(WAnchor, textFormat),
    METHOD(WAnchor, wordWrap),
    METHOD(WAnchor, setImage),
    METHOD(WAnchor, image),
    METHOD(WAnchor, setTarget),
    METHOD(WAnchor, target),
    METHOD(WAnchor, scrolled),
    METHOD(WAnchor, keyWentDown),
    METHOD(WAnchor, keyPressed),
    METHOD(WAnchor, keyWentUp),
    METHOD(WAnchor, enterPressed),
    METHOD(WAnchor, escapePressed),
    METHOD(WAnchor, clicked),
    METHOD(WAnchor, doubleClicked),
    METHOD(WAnchor, mouseWentDown),
    METHOD(WAnchor, mouseWentUp),
    METHOD(WAnchor, mouseWentOut),
    METHOD(WAnchor, mouseWentOver),
    METHOD(WAnchor, mouseMoved),
    METHOD(WAnchor, mouseDragged),
    METHOD(WAnchor, mouseWheel),
    METHOD(WAnchor, touchStarted),
    METHOD(WAnchor, touchEnded),
    METHOD(WAnchor, touchMoved),
    METHOD(WAnchor, gestureStarted),
    METHOD(WAnchor, gestureChanged),
    METHOD(WAnchor, gestureEnded),
    {NULL, NULL},
};

void luawt_WAnchor(lua_State* L) {
    const char* base = luawt_typeToStr<WContainerWidget>();
    assert(base);
    DECLARE_CLASS(
        WAnchor,
        L,
        wrap<luawt_WAnchor_make>::func,
        0,
        luawt_WAnchor_methods,
        base
    );
}
