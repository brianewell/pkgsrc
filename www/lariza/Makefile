# $NetBSD: Makefile,v 1.1 2021/03/02 19:46:38 pin Exp $

DISTNAME=	lariza-v21.01
PKGNAME=	${DISTNAME:S,-v,-,}
CATEGORIES=	www
MASTER_SITES=	https://www.uninformativ.de/git/lariza/archives/

MAINTAINER=	pkgsrc-users@NetBSD.org
HOMEPAGE=	https://uninformativ.de/git/lariza
COMMENT=	Experimental web browser using WebKit2GTK+
LICENSE=	mit

USE_TOOLS+=		gmake pkg-config

SUBST_CLASSES+=		prefix
SUBST_MESSAGE.prefix=	Fixing paths.
SUBST_STAGE.prefix=	pre-configure
SUBST_FILES.prefix+=	Makefile
SUBST_SED.prefix+=	-e 's,/usr/local,${PREFIX},g'

TOOL_DEPENDS+=	gperf-[0-9]*:../../devel/gperf

.include "../../www/webkit-gtk/buildlink3.mk"
.include "../../x11/gtk3/buildlink3.mk"
.include "../../devel/glib2/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
