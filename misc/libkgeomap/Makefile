# $NetBSD: Makefile,v 1.56 2021/02/07 06:30:09 ryoon Exp $

DISTNAME=	libkgeomap-${KAPPSVER}
PKGREVISION=	6
CATEGORIES=	misc

HOMEPAGE=	https://kde.org/applications/graphics/
COMMENT=	World-Map Library interface for KDE
LICENSE=	gnu-lgpl-v2 AND gnu-gpl-v3 AND gnu-fdl-v1.2

.include "../../meta-pkgs/kde/applications.mk"

USE_TOOLS+=	msgmerge

.include "../../devel/kio/buildlink3.mk"
.include "../../graphics/libkexiv2/buildlink3.mk"
.include "../../misc/marble/buildlink3.mk"
.include "../../x11/qt5-qtbase/buildlink3.mk"
.include "../../x11/qt5-qtwebkit/buildlink3.mk"
.include "../../mk/bsd.pkg.mk"
