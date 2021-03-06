# $NetBSD: Makefile,v 1.28 2021/03/05 08:47:29 nia Exp $

DISTNAME=		fish-3.2.0
CATEGORIES=		shells
MASTER_SITES=		${MASTER_SITE_GITHUB:=fish-shell/}
GITHUB_PROJECT=		fish-shell
GITHUB_RELEASE=		${PKGVERSION_NOREV}
EXTRACT_SUFX=		.tar.xz

MAINTAINER=		pkgsrc-users@NetBSD.org
HOMEPAGE=		http://www.fishshell.com/
COMMENT=		User friendly command line shell for UNIX-like operating systems
LICENSE=		gnu-gpl-v2

USE_LANGUAGES+=		c c++
USE_CMAKE=		yes
USE_TOOLS+=		msgfmt
CMAKE_ARGS+=		-DIntl_INCLUDE_DIR=${PREFIX}/include
CMAKE_ARGS+=		-DCMAKE_INSTALL_SYSCONFDIR=${PKG_SYSCONFDIR}

PKG_SHELL=		bin/fish

REPLACE_PYTHON+=	share/tools/*.py
REPLACE_PYTHON+=	share/tools/web_config/webconfig.py

LDFLAGS.SunOS+=		-lintl

.include "../../mk/bsd.prefs.mk"

.if ${OPSYS} == "NetBSD" && exists(/usr/include/execinfo.h)
CPPFLAGS+=		-DHAVE_BACKTRACE
CPPFLAGS+=		-DHAVE_BACKTRACE_SYMBOLS
CXXFLAGS.NetBSD+=	-fpermissive
LDFLAGS+=		-lexecinfo
.endif

# Upstream intentionally omits open.1 on Darwin, but adds realpath.1
PLIST_VARS+=	open realpath
.if ${OPSYS} == "Darwin"
PLIST.realpath=	yes
.else
PLIST.open=	yes
.endif

EGDIR=		${PREFIX}/share/examples/fish
CONF_FILES=	${EGDIR}/config.fish ${PKG_SYSCONFDIR}/fish/config.fish
OWN_DIRS+=	${PKG_SYSCONFDIR}/fish/functions
OWN_DIRS+=	${PKG_SYSCONFDIR}/fish/conf.d
OWN_DIRS+=	${PKG_SYSCONFDIR}/fish/completions

.include "../../devel/pcre2/buildlink3.mk"
.include "../../devel/gettext-lib/buildlink3.mk"
.include "../../devel/gettext-tools/buildlink3.mk"
.include "../../lang/python/application.mk"
.include "../../sysutils/desktop-file-utils/desktopdb.mk"
.include "../../mk/atomic64.mk"
.include "../../mk/curses.buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
