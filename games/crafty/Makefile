# $NetBSD: Makefile,v 1.47 2018/07/18 00:06:16 joerg Exp $

DISTNAME=		crafty-22.1
PKGREVISION=		2
CATEGORIES=		games
MASTER_SITES=		http://www.craftychess.com/
EXTRACT_SUFX=		.zip

MAINTAINER=		pkgsrc-users@NetBSD.org
COMMENT=		Chess engine

USE_LANGUAGES=		c c++03

.include "../../mk/bsd.prefs.mk"

CRAFTY_OPTS=		-DBOOKDIR=\"${BOOKDIR:Q}\"
CRAFTY_OPTS+=		-DTBDIR=\"${TBDIR:Q}\"
MAKE_ENV+=		target=NetBSD

BUILD_TARGET=		crafty-make

BOOKDIR=		${PREFIX}/lib/crafty
TBDIR=			${PREFIX}/share/egtb
DOCDIR=			${PREFIX}/share/doc/crafty

CRAFTYRC=		${WRKSRC}/.craftyrc
INSTALLATION_DIRS=	bin

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/crafty ${DESTDIR}${PREFIX}/bin

.include "../../mk/bsd.pkg.mk"
