const char *const packages[] = {
    "abakus",
    "aki",
    "aki/libakicore",
    "akiirc",
    "akiirc/ChannelView",
    "akiirc/ChatInput",
    "akiirc/notifications",
    "akiirc/ServerView",
    "Akonadi",
    "Akonadi/ICal file resource",
    "Akonadi/IMAP resource",
    "Akonadi/KResource compat bridges",
    "Akonadi/libakonadi",
    "Akonadi/server",
    "Akonadi/VCard dir resource",
    "Akonadi/VCard file resource",
    "akregator",
    "akregator/akregator konqueror plugin",
    "akregator/feed parser",
    "akregator/internal browser",
    "akregator/kontact plugin",
    "akregator/metakit plugin",
    "amarok",
    "amarok/AFT",
    "amarok/Collection",
    "amarok/CollectionBrowser",
    "amarok/ContextView",
    "amarok/DAAP",
    "amarok/DynamicPlaylists",
    "amarok/Engines",
    "amarok/FileBrowser",
    "amarok/Mediabrowser",
    "amarok/OSD",
    "amarok/Playlist",
    "amarok/PlaylistBrowser",
    "amarok/Podcast",
    "amarok/ScriptManager",
    "amarok/ServiceBrowser",
    "amor",
    "ark",
    "ark/Konqueror Plugin",
    "artwork",
    "basket",
    "bindings",
    "blinken",
    "bovo",
    "bugs.kde.org",
    "bugs.kde.org/code customizations",
    "bugs.kde.org/database",
    "bugs.kde.org/product/component changes",
    "bugs.kde.org/templates",
    "buildsystem",
    "buildsystem/KDE4 (cmake)",
    "cervisia",
    "choqok",
    "datakiosk",
    "digikam",
    "digikam/Albums GUI",
    "digikam/Batch Queue Manager",
    "digikam/Camera GUI",
    "digikam/Color Management",
    "digikam/Database",
    "digikam/Dates",
    "digikam/Export",
    "digikam/Filter",
    "digikam/Fuzzy Searches",
    "digikam/Geolocation",
    "digikam/Image Editor",
    "digikam/Import",
    "digikam/Kioslave",
    "digikam/Kipiinterface",
    "digikam/Light Table",
    "digikam/Map Searches",
    "digikam/Metadata",
    "digikam/Portability",
    "digikam/Preview",
    "digikam/RAW files management",
    "digikam/Searches",
    "digikam/setup",
    "digikam/SlideShow",
    "digikam/Tags",
    "digikam/Themes",
    "digikam/Thumbnails",
    "digikam/Time Line",
    "digikam/Usability",
    "digikam/Workflow",
    "digikamimageplugins",
    "digikamimageplugins/Adjust Curves",
    "digikamimageplugins/AdjustLevels",
    "digikamimageplugins/Anti-Vignetting",
    "digikamimageplugins/Blur Fx",
    "digikamimageplugins/Border",
    "digikamimageplugins/Channel Mixer",
    "digikamimageplugins/Charcoal",
    "digikamimageplugins/ColorFx",
    "digikamimageplugins/Core Plugin",
    "digikamimageplugins/Distortion Fx",
    "digikamimageplugins/Emboss",
    "digikamimageplugins/Filmgrain",
    "digikamimageplugins/Free Rotation",
    "digikamimageplugins/Hot Pixels",
    "digikamimageplugins/Infrared",
    "digikamimageplugins/Inpainting",
    "digikamimageplugins/Insert Text",
    "digikamimageplugins/Lens Distortion",
    "digikamimageplugins/Noise Reduction",
    "digikamimageplugins/OilPaint",
    "digikamimageplugins/Perspective",
    "digikamimageplugins/Raindrops",
    "digikamimageplugins/Refocus",
    "digikamimageplugins/Restoration",
    "digikamimageplugins/Shear",
    "digikamimageplugins/Super-Impose",
    "digikamimageplugins/Texture",
    "digikamimageplugins/Unsharp",
    "digikamimageplugins/White Balance",
    "digikamimageplugins/Wish for new plugin",
    "docs",
    "docs/Corrections",
    "docs/docs.kde.org",
    "docs/faq",
    "docs/ksgmltools",
    "docs/Missing Content",
    "docs/Screenshots",
    "dolphin",
    "dragonplayer",
    "drkonqi",
    "drkonqi/backtraceparsing",
    "filelight",
    "grantlee",
    "guidance",
    "gwenview",
    "HIG",
    "i18n",
    "i18n/af",
    "i18n/bg",
    "i18n/br",
    "i18n/ca",
    "i18n/cs",
    "i18n/cy",
    "i18n/da",
    "i18n/de",
    "i18n/el",
    "i18n/en_GB",
    "i18n/eo",
    "i18n/es",
    "i18n/et",
    "i18n/eu",
    "i18n/fi",
    "i18n/fr",
    "i18n/ga",
    "i18n/gl",
    "i18n/gu",
    "i18n/he",
    "i18n/hr",
    "i18n/hu",
    "i18n/is",
    "i18n/it",
    "i18n/ja",
    "i18n/ko",
    "i18n/lt",
    "i18n/lv",
    "i18n/mk",
    "i18n/nb",
    "i18n/nl",
    "i18n/nn",
    "i18n/oc",
    "i18n/pl",
    "i18n/pt",
    "i18n/pt-BR",
    "i18n/ro",
    "i18n/ru",
    "i18n/sk",
    "i18n/sl",
    "i18n/sr",
    "i18n/sv",
    "i18n/ta",
    "i18n/th",
    "i18n/tr",
    "i18n/uk",
    "i18n/wa",
    "i18n/zh-CN.GB2312",
    "i18n/zh_TW",
    "juk",
    "k3b",
    "k3b/Audio Project",
    "k3b/Burning/Hardware",
    "k3b/Copying",
    "k3b/Data Project",
    "k3b/eMovix project",
    "k3b/GUI/Usability",
    "k3b/Image Formats",
    "k3b/Mixed Mode Project",
    "k3b/Plugins",
    "k3b/Verfication",
    "k3b/Video CD project",
    "k3b/Video DVD",
    "kaddressbook",
    "kaddressbook/ldap search",
    "kaddressbook/printing",
    "kaffeine",
    "kalarm",
    "kalarm/kalarmd",
    "kalcul",
    "kalgebra",
    "kalzium",
    "kalzium/Calculator",
    "kanagram",
    "kandy",
    "kapman",
    "kappfinder",
    "kapptemplate",
    "karbon",
    "karbon/opendocument",
    "karbon/usability",
    "kard",
    "kate",
    "kate/application",
    "kate/folding",
    "kate/indentation",
    "kate/kwrite",
    "kate/part",
    "kate/syntax",
    "kate/Vi Input Mode",
    "katomic",
    "kaudiocreator",
    "kbackgammon",
    "kbattleship",
    "kblackbox",
    "kblocks",
    "kbounce",
    "kbreakout",
    "kbruch",
    "kcachegrind",
    "kcalc",
    "KCall",
    "kcanvas",
    "kcharselect",
    "kchart",
    "kchart/opendocument",
    "kchart/shape",
    "kchart/usability",
    "kcoloredit",
    "kcron",
    "kde",
    "kde/clipboard",
    "kde/dualhead",
    "kde/xinerama",
    "kde-windows",
    "kde-windows/buildsystem",
    "kde-windows/gui",
    "kde-windows/installer",
    "kde-windows/network&files",
    "kde-windows/other",
    "kde-windows/porting",
    "kdebugdialog",
    "kdelibs",
    "kdelibs/kbugreport",
    "kdelibs/kcertpart",
    "kdelibs/kdecore",
    "kdelibs/kded",
    "kdelibs/kdeinit",
    "kdelibs/kdesasl",
    "kdelibs/kdeui",
    "kdelibs/kdewebkit",
    "kdelibs/kedittoolbar",
    "kdelibs/kimgio",
    "kdelibs/klauncher",
    "kdelibs/klocale",
    "kdelibs/kmdi",
    "kdelibs/knetwork",
    "kdelibs/knewstuff",
    "kdelibs/knotify",
    "kdelibs/kpasswdserver",
    "kdelibs/kspell",
    "kdelibs/kstyle",
    "kdelibs/ksycoca",
    "kdelibs/kwallet",
    "kdelibs/print-dialog",
    "kdelibs/qt",
    "kdelibs/shortcuts",
    "kdemultimedia",
    "kdemultimedia/mplayerthumbs",
    "kdepasswd",
    "kdepimlibs",
    "kdepimlibs/gpgme++",
    "kdepimlibs/kabc",
    "kdepimlibs/kblog",
    "kdepimlibs/kcal",
    "kdepimlibs/kholidays",
    "kdepimlibs/kldap",
    "kdepimlibs/kmime",
    "kdepimlibs/kpimidentities",
    "kdepimlibs/kpimtextedit",
    "kdepimlibs/mailtransport",
    "kdepimlibs/qgpgme",
    "kdepimlibs/syndication",
    "kdesdk-scripts",
    "kdesdk-scripts/cmake",
    "kdesdk-scripts/Miscellaneous",
    "kdesdk-scripts/source_control",
    "kdesu",
    "kdesu/kdesu",
    "kdesu/kdesud",
    "kdesvn-build",
    "kdevelop",
    "kdevelop/abbreviation plugin",
    "kdevelop/all build tools",
    "kdevelop/all editors",
    "kdevelop/application templates",
    "kdevelop/astyle",
    "kdevelop/bookmarks part",
    "kdevelop/Build tools: ANT",
    "kdevelop/Build tools: Automake",
    "kdevelop/Build tools: CMake",
    "kdevelop/Build tools: Custom Makefiles",
    "kdevelop/Build tools: QMake",
    "kdevelop/Buildtools: Make",
    "kdevelop/classview",
    "kdevelop/code completion",
    "kdevelop/coverage",
    "kdevelop/CPP Debugger",
    "kdevelop/cpp-parser",
    "kdevelop/CTags",
    "kdevelop/distpart",
    "kdevelop/doctreeview",
    "kdevelop/documentation viewer",
    "kdevelop/documentview",
    "kdevelop/doxygen integration",
    "kdevelop/file create",
    "kdevelop/file groups",
    "kdevelop/file selector",
    "kdevelop/file tree",
    "kdevelop/grep frontend",
    "kdevelop/ident",
    "kdevelop/kdevelop 2.x (obsolete)",
    "kdevelop/Language Support: Ada",
    "kdevelop/Language Support: CPP",
    "kdevelop/Language Support: Java",
    "kdevelop/Language Support: Pascal",
    "kdevelop/Language Support: Perl",
    "kdevelop/Language Support: PHP",
    "kdevelop/Language Support: Python",
    "kdevelop/Language Support: Ruby",
    "kdevelop/Output Views",
    "kdevelop/partexplorer",
    "kdevelop/php support",
    "kdevelop/problem reporter",
    "kdevelop/Profiles",
    "kdevelop/qeditor",
    "kdevelop/Qt Designer Integration",
    "kdevelop/replace part",
    "kdevelop/scriptproject",
    "kdevelop/UI: all modes",
    "kdevelop/UI: childframe window",
    "kdevelop/UI: IDEAl",
    "kdevelop/UI: tabbed pages",
    "kdevelop/UI: toplevel window",
    "kdevelop/valgrind integration",
    "kdevelop/VCS: Clearcase",
    "kdevelop/VCS: CVS",
    "kdevelop/VCS: CVSService",
    "kdevelop/VCS: Perforce",
    "kdevplatform",
    "kdevplatform/appwizard",
    "kdevplatform/bazaar",
    "kdevplatform/classbrowser",
    "kdevplatform/contextbrowser",
    "kdevplatform/documentswitcher",
    "kdevplatform/dvcs",
    "kdevplatform/editor integration",
    "kdevplatform/filemanager",
    "kdevplatform/git",
    "kdevplatform/konsole integration",
    "kdevplatform/kross",
    "kdevplatform/language",
    "kdevplatform/mercurial",
    "kdevplatform/outputview",
    "kdevplatform/problemreporter",
    "kdevplatform/project",
    "kdevplatform/quickopen",
    "kdevplatform/run support",
    "kdevplatform/shell",
    "kdevplatform/snippet",
    "kdevplatform/sourceformatter",
    "kdevplatform/sublime",
    "kdevplatform/subversion",
    "kdevplatform/util",
    "kdevplatform/vcs",
    "kdevplatform/veritas",
    "kdf",
    "kdialog",
    "kdiamond",
    "kdiff3",
    "kdiff3/KDiff3Part",
    "kdm",
    "kdm/kdmdesktop",
    "kdm/krootimage",
    "keditbookmarks",
    "kephal",
    "kephal/General",
    "kexi",
    "kexi/Forms",
    "kexi/General",
    "kexi/KexiDB",
    "kexi/Migration/Import/Export",
    "kexi/Queries",
    "kexi/Reports and Printouts",
    "kexi/Scripting",
    "kexi/Tables",
    "kexi/Usability",
    "Keyboard status applet",
    "kfax",
    "kfile",
    "kfile/kfileplacesview",
    "kfile-plugins",
    "kfile-plugins/avi",
    "kfile-plugins/exr",
    "kfile-plugins/jpeg",
    "kfile-plugins/mp3",
    "kfile-plugins/mpeg",
    "kfile-plugins/ogg",
    "kfile-plugins/OOo",
    "kfile-plugins/pdf",
    "kfile-plugins/PNG",
    "kfile-plugins/ps",
    "kfile-plugins/wav",
    "kfilereplace",
    "kfind",
    "kfloppy",
    "kformula",
    "kformula/filters",
    "kformula/usability",
    "kfourinline",
    "kftpgrabber",
    "kgeography",
    "kget",
    "kget/Core",
    "kget/konqextension",
    "kget/metalink",
    "kget/Multisegkio",
    "kget/plasma widget",
    "kget/torrent",
    "kget/UI",
    "kget/webinterface",
    "kgoldrunner",
    "kgpg",
    "kgrapheditor",
    "kgraphviewer",
    "Khalkhi",
    "Khalkhi/kicker applet",
    "khangman",
    "khelpcenter",
    "khotkeys",
    "khotkeys/Voice recognition",
    "kiconedit",
    "kig",
    "kile",
    "kile/editor",
    "kile/user interface",
    "killbots",
    "kimagemapeditor",
    "kinfocenter",
    "kio",
    "kio/audiocd",
    "kio/cgi",
    "kio/devices",
    "kio/file",
    "kio/fish",
    "kio/floppy",
    "kio/ftp",
    "kio/gopher",
    "kio/help",
    "kio/home",
    "kio/http",
    "kio/imap",
    "kio/info",
    "kio/kamera",
    "kio/kfile",
    "kio/kioslave",
    "kio/kssl",
    "kio/man",
    "kio/media",
    "kio/network",
    "kio/nfs",
    "kio/nntp",
    "kio/pop3",
    "kio/remote",
    "kio/settings",
    "kio/sftp",
    "kio/sieve",
    "kio/smb",
    "kio/smbro",
    "kio/smtp",
    "kio/svn",
    "kio/system",
    "kio/tar",
    "kio/thumbnail",
    "kio/trash",
    "kio/uiserver",
    "kio/webdav",
    "kio/zeroconf",
    "kio/zip",
    "kiosk",
    "kiosk/kiosktool",
    "kipiplugins",
    "kipiplugins/acquireimages",
    "kipiplugins/AdvancedSlideshow",
    "kipiplugins/batchprocessimages",
    "kipiplugins/calendar",
    "kipiplugins/cdarchiving",
    "kipiplugins/DngConverter",
    "kipiplugins/Facebook/23",
    "kipiplugins/findimages",
    "kipiplugins/FlashExport",
    "kipiplugins/flickrexport",
    "kipiplugins/galleryexport",
    "kipiplugins/GPSSync",
    "kipiplugins/HTMLExport",
    "kipiplugins/imageviewer",
    "kipiplugins/IpodExport",
    "kipiplugins/jpeglossless",
    "kipiplugins/kameraklient",
    "kipiplugins/libkdcraw",
    "kipiplugins/libkexiv2",
    "kipiplugins/libkipi",
    "kipiplugins/metadataedit",
    "kipiplugins/mpegencoder",
    "kipiplugins/picasawebexport",
    "kipiplugins/printwizard",
    "kipiplugins/rawconverter",
    "kipiplugins/RemoveRedEyes",
    "kipiplugins/sendimages",
    "kipiplugins/Smug",
    "kipiplugins/timeadjust",
    "kipiplugins/wallpaper",
    "kipiplugins/Wish For New Plugins",
    "kiriki",
    "kit/icons",
    "kitchensync",
    "kiten",
    "kivio",
    "kivio/usability",
    "kjots",
    "kjsembed",
    "kjsembed/Core",
    "kjsembed/Docs and examples",
    "kjsembed/Plugins",
    "kjumpingcube",
    "kleopatra",
    "kleopatra/Assuan UI Server",
    "klettres",
    "klickety",
    "klines",
    "klinkstatus",
    "klipper",
    "kmag",
    "kmahjongg",
    "kmail2",
    "kmail2/commands and actions",
    "kmail2/composer",
    "kmail2/composereditor-ng",
    "kmail2/config dialog",
    "kmail2/crypto",
    "kmail2/filtering",
    "kmail2/folders",
    "kmail2/general",
    "kmail2/MDN",
    "kmail2/message list",
    "kmail2/misc",
    "kmail2/sieve",
    "kmail2/UI",
    "kmenuedit",
    "kmid",
    "kmines",
    "kmix",
    "kmix/Backend: Pulseaudio",
    "kmix/KMix Panel Applet",
    "kmix/KMix Panel Docking",
    "kmix/On-Screen-Display (OSD)",
    "kmix/Soundcard specific",
    "kmldonkey",
    "kmldonkey/libkmldonkey",
    "kmobiletools",
    "kmobiletools/AT Engine",
    "kmobiletools/Gammu Engine",
    "kmousetool",
    "kmouth",
    "kmplayer",
    "kmplot",
    "kmtrace",
    "knemo",
    "knetattach",
    "knetwalk",
    "knode",
    "knotes",
    "kolf",
    "kollision",
    "kolourpaint",
    "kolourpaint/general-kde4",
    "kolourpaint/imagelib",
    "kolourpaint/ui",
    "kolourpaint/ui-kde4",
    "kommander",
    "kommander/Kommander editor",
    "kommander/Kommander executor",
    "kompare",
    "kompare/navigationpart",
    "kompare/parser",
    "kompare/viewpart",
    "konqueror",
    "konqueror/bookmarks",
    "konqueror/file icon view",
    "konqueror/file list view",
    "konqueror/fsview",
    "konqueror/imagerotation",
    "konqueror/kcookiejar",
    "konqueror/khtml",
    "konqueror/khtml adblock",
    "konqueror/khtml ecma",
    "konqueror/khtml event",
    "konqueror/khtml forms",
    "konqueror/khtml image part",
    "konqueror/khtml parsing",
    "konqueror/khtml part",
    "konqueror/khtml printing",
    "konqueror/khtml renderer",
    "konqueror/khtml svg",
    "konqueror/khtml xml",
    "konqueror/kimgalleryplugin",
    "konqueror/kjava",
    "konqueror/kjs",
    "konqueror/konq-e",
    "konqueror/kuick",
    "konqueror/New Plugin wishes",
    "konqueror/nsplugins",
    "konqueror/nspluginscan",
    "konqueror/nspluginviewer",
    "konqueror/photobook",
    "konqueror/reaktivate",
    "konqueror/rellinks",
    "konqueror/searchbarplugin",
    "konqueror/servicemenus",
    "konqueror/session restore",
    "konqueror/sidebar",
    "konqueror/sidebar media player",
    "konqueror/sidebar newsticker",
    "konqueror/tabbing",
    "konqueror/webarchiverplugin",
    "konquest",
    "konsole",
    "konsole/kwrited",
    "konsolekalendar",
    "kontact",
    "kontact/akregator",
    "kontact/calendar",
    "kontact/contacts",
    "kontact/journal",
    "kontact/ktimetracker",
    "kontact/mail",
    "kontact/new plugin wishes",
    "kontact/news",
    "kontact/newsticker",
    "kontact/notes",
    "kontact/planner summary",
    "kontact/special dates",
    "kontact/summary",
    "kontact/todo",
    "konversation",
    "konversation/dcc",
    "konversation/documentation",
    "konversation/inputline",
    "konversation/ircview",
    "konversation/logging",
    "konversation/notifications",
    "konversation/protocol",
    "konversation/tabcompletion",
    "konversation/upnp",
    "kooka",
    "kooka/libkscan",
    "kopete",
    "kopete/Add Contact Wizard",
    "kopete/Addressbook integration",
    "kopete/Alias Plugin",
    "kopete/Audio/Video Plugin",
    "kopete/Auto-Away Plugin",
    "kopete/Autoreplace plugin",
    "kopete/Bonjour Plugin",
    "kopete/Bookmarks plugin",
    "kopete/Chat Window",
    "kopete/Chatwindow Styles",
    "kopete/Connection Status Plugin",
    "kopete/Contact list",
    "kopete/Contact Notes Plugin",
    "kopete/Cryptography Plugin",
    "kopete/DBus",
    "kopete/DCOP Interface",
    "kopete/Gadu-Gadu Plugin",
    "kopete/History Plugin",
    "kopete/ICQ and AIM Plugins",
    "kopete/Importer plugin",
    "kopete/IRC Plugin",
    "kopete/Jabber Plugin",
    "kopete/Latex Plugin",
    "kopete/libkopete",
    "kopete/Lotus Sametime Plugin",
    "kopete/Main Application",
    "kopete/Meanwhile plugin",
    "kopete/MSN Plugin",
    "kopete/New plugin wishes",
    "kopete/Notifications",
    "kopete/Novell GroupWise Messenger Plugin",
    "kopete/Now Listening Plugin",
    "kopete/OTR Plugin",
    "kopete/Pipes Plugin",
    "kopete/Privacy Plugin",
    "kopete/QQ Plugin",
    "kopete/Skype Plugin",
    "kopete/SMS Plugin",
    "kopete/SpellCheck Plugin",
    "kopete/Statistics plugin",
    "kopete/Testbed Plugin",
    "kopete/Texteffect Plugin",
    "kopete/Translator Plugin",
    "kopete/Web Presence Plugin",
    "kopete/WinPopup Plugin",
    "kopete/WLM Plugin",
    "kopete/Yahoo Plugin",
    "korganizer",
    "korganizer/agendaview (weekview)",
    "korganizer/embedded",
    "korganizer/exchangeplugin",
    "korganizer/groupware",
    "korganizer/html export",
    "korganizer/import/export",
    "korganizer/invitations",
    "korganizer/journalview",
    "korganizer/monthview",
    "korganizer/otherviews",
    "korganizer/printing",
    "korganizer/reminder daemon (korgac)",
    "korganizer/todoview",
    "kpat",
    "kphotoalbum",
    "kphotoalbum/Annotation Dialog",
    "kphotoalbum/Backend",
    "kphotoalbum/Browser",
    "kphotoalbum/Datebar",
    "kphotoalbum/EXIF viewer/search",
    "kphotoalbum/HTML generator",
    "kphotoalbum/Import/Export",
    "kphotoalbum/SQL backend",
    "kphotoalbum/Thumbnail Viewer",
    "kphotoalbum/Viewer",
    "kphotoalbum/XML backend",
    "kpovmodeler",
    "kppp",
    "kpresenter",
    "kpresenter/filters",
    "kpresenter/opendocument",
    "kpresenter/usability",
    "krandr",
    "krandr/control center",
    "krandr/krandrtray",
    "krazy",
    "krdc",
    "krdc/NX",
    "krdc/RDP",
    "krdc/VNC",
    "krecord",
    "kregexpeditor",
    "kresources",
    "kresources/birthdays",
    "kresources/blogging",
    "kresources/bugzilla",
    "kresources/egroupware",
    "kresources/exchange",
    "kresources/featureplan",
    "kresources/framework",
    "kresources/groupdav",
    "kresources/groupwise",
    "kresources/imap",
    "kresources/ldap",
    "kresources/local",
    "kresources/newexchange",
    "kresources/remote",
    "kresources/SLOX",
    "kreversi",
    "krfb",
    "krita",
    "krita/adjustment layers",
    "krita/Color models",
    "krita/Documentation",
    "krita/File formats",
    "krita/Filters",
    "krita/Tile manager",
    "krita/Tools",
    "krita/transform",
    "krita/usability",
    "kruler",
    "krunner",
    "krunner/quicksand",
    "krusader",
    "ksayit",
    "kscd",
    "kscreensaver",
    "kscreensaver/kcheckpass",
    "kscreensaver/kpartsaver",
    "kscreensaver/ktux",
    "kscreensaver/kxsrun",
    "kscreensaver/screensavers",
    "kshisen",
    "ksirk",
    "ksirkskineditor",
    "ksmserver",
    "ksnapshot",
    "kspaceduel",
    "ksplash",
    "kspread",
    "kspread/filters",
    "kspread/opendocument",
    "kspread/usability",
    "KSquares",
    "kst",
    "kst/datasources",
    "kst/documentation",
    "kst/elog extension",
    "kst/equations",
    "kst/i18n",
    "kst/packaging",
    "kst/plotting",
    "kst/plugins",
    "kst/scripting",
    "kst/ui",
    "kst/view objects",
    "kstars",
    "kstart",
    "kstartperf",
    "ksudoku",
    "ksvg2",
    "ksysguard",
    "ksysguard/ksysguard",
    "ksysguard/ksysguardd",
    "ksysguard/Plasmoid / Applet",
    "ksysguard/Process Controller - krunner part",
    "KSystemLog",
    "kteatime",
    "ktimer",
    "ktimetracker",
    "ktimetracker/reporting",
    "ktnef",
    "ktorrent",
    "ktouch",
    "ktron",
    "kttt",
    "ktuberling",
    "kturtle",
    "kubrick",
    "kuickshow",
    "kuiviewer",
    "kuser",
    "kverbos",
    "kvkbd",
    "kvoctrain",
    "kvpnc",
    "kwalletmanager",
    "kwebkitpart",
    "kwikdisk",
    "kwin",
    "kwin/compatibility",
    "kwin/compositing",
    "kwin/decorations",
    "kwin/eyecandy",
    "kwin/multihead",
    "kwin/xinerama",
    "kwordquiz",
    "kxkb",
    "kxsldbg",
    "kxsldbg/kxsldbg",
    "kxsldbg/xsldbg",
    "libkcddb",
    "libkdegames",
    "libkdepim",
    "libkdepim/libkpgp",
    "libksane",
    "lokalize",
    "lokalize/editor",
    "lokalize/glossary",
    "lokalize/project management",
    "lokalize/translation memory",
    "lskat",
    "marble",
    "marble/data",
    "marble/plasmoid",
    "metabar",
    "nepomuk",
    "Network Management",
    "Network Management/Control Module",
    "Network Management/KDED Module",
    "Network Management/knetworkmanager",
    "Network Management/Plasma Widget",
    "okteta",
    "okular",
    "okular/CHM backend",
    "okular/Comicbook backend",
    "okular/DjVu backend",
    "okular/DVI backend",
    "okular/EPub backend",
    "okular/New backend wishes",
    "okular/ODT backend",
    "okular/PDF backend",
    "okular/PS backend",
    "okular/TIFF backend",
    "okular/XPS backend",
    "Oxygen",
    "Oxygen/icons",
    "Oxygen/sound",
    "Oxygen/style",
    "Oxygen/win deco",
    "parley",
    "partitionmanager",
    "Phonon",
    "Phonon/avKode backend",
    "Phonon/frontend",
    "Phonon/GStreamer backend",
    "Phonon/KDE platform plugin",
    "Phonon/kded module for audio device listing",
    "Phonon/NMM backend",
    "Phonon/settings",
    "Phonon/VLC backend",
    "Phonon/Xine backend",
    "Planet KDE",
    "Planet KDE/feeds",
    "plasma",
    "plasma/containment-desktop",
    "plasma/containment-panel",
    "plasma/desktop",
    "plasma/multihead",
    "plasma/multiscreen",
    "plasma/notifications",
    "plasma/panel",
    "plasma/screensaver overlay",
    "plasma/scriptengines",
    "plasma/wallpaper-image",
    "plasma/widget browser",
    "plasma/widget-battery",
    "plasma/widget-clock",
    "plasma/widget-comic",
    "plasma/widget-fifteenpuzzle",
    "plasma/widget-folderview",
    "plasma/widget-frame",
    "plasma/widget-kickoff",
    "plasma/widget-lancelot",
    "plasma/widget-microblogging",
    "plasma/widget-misc",
    "plasma/widget-notifier",
    "plasma/widget-nowplaying",
    "plasma/widget-osx",
    "plasma/widget-pager",
    "plasma/widget-pastebin",
    "plasma/widget-quicklaunch",
    "plasma/widget-rememberthemilk",
    "plasma/widget-systemmonitor",
    "plasma/widget-systemtray",
    "plasma/widget-taskbar",
    "plasma/widget-trashcan",
    "plasma/widget-weather",
    "policykit-kde",
    "policykit-kde/kcm_auth",
    "policykit-kde/manager",
    "qca",
    "rekonq",
    "Rocs",
    "showfoto",
    "Skanlite",
    "skrooge",
    "solid",
    "solid/control::bluetooth",
    "solid/control::network",
    "solid/libsolid",
    "solid/powermanagement"
    "solid/powermanagement-daemon",
    "solid/powermanagement-kcm",
    "step",
    "step/stepcore",
    "superkaramba",
    "sweeper",
    "systemsettings",
    "systemsettings/kcm_accessibility",
    "systemsettings/kcm_autostart",
    "systemsettings/kcm_bell",
    "systemsettings/kcm_clock",
    "systemsettings/kcm_colors",
    "systemsettings/kcm_componentchooser",
    "systemsettings/kcm_desktop",
    "systemsettings/kcm_desktoppath",
    "systemsettings/kcm_desktopthemedetails",
    "systemsettings/kcm_emoticons",
    "systemsettings/kcm_energy",
    "systemsettings/kcm_fileshare",
    "systemsettings/kcm_filetypes",
    "systemsettings/kcm_fontinst",
    "systemsettings/kcm_fonts",
    "systemsettings/kcm_icons",
    "systemsettings/kcm_joystick",
    "systemsettings/kcm_kded",
    "systemsettings/kcm_kdm",
    "systemsettings/kcm_kdnssd",
    "systemsettings/kcm_keyboard",
    "systemsettings/kcm_keyboard_layout",
    "systemsettings/kcm_keys",
    "systemsettings/kcm_kgamma",
    "systemsettings/kcm_khotkeys",
    "systemsettings/kcm_ksmserver",
    "systemsettings/kcm_ksplashthememgr",
    "systemsettings/kcm_kthememanage",
    "systemsettings/kcm_kwincompositing",
    "systemsettings/kcm_kwindecoration",
    "systemsettings/kcm_kwinoptions",
    "systemsettings/kcm_language",
    "systemsettings/kcm_launch",
    "systemsettings/kcm_mouse",
    "systemsettings/kcm_netpref",
    "systemsettings/kcm_notify",
    "systemsettings/kcm_phonon",
    "systemsettings/kcm_proxy",
    "systemsettings/kcm_randr",
    "systemsettings/kcm_samba",
    "systemsettings/kcm_screensaver",
    "systemsettings/kcm_solid-actions",
    "systemsettings/kcm_standard_actions",
    "systemsettings/kcm_style",
    "systemsettings/kcm_useraccount",
    "systemsettings/treeview",
    "taglib",
    "telepathy",
    "telepathy/accountmanager-kwallet",
    "telepathy/accounts-kcm",
    "telepathy/presence-applet",
    "telepathy/presence-dataengine",
    "telepathy/telepathy-qt",
    "tellico",
    "umbrello",
    "unknown",
    "valgrind",
    "valgrind/addrcheck (defunct)",
    "valgrind/cachegrind",
    "valgrind/callgrind",
    "valgrind/drd",
    "valgrind/helgrind",
    "valgrind/massif",
    "valgrind/memcheck",
    "valgrind/ptrcheck",
    "valgrind/vex",
    "www.kde.org",
    "yakuake",
    0
};
