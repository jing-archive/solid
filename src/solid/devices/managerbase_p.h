/*
    SPDX-FileCopyrightText: 2006-2007 Kevin Ottens <ervin@kde.org>

    SPDX-License-Identifier: LGPL-2.1-only OR LGPL-3.0-only OR LicenseRef-KDE-Accepted-LGPL
*/

#ifndef SOLID_MANAGERBASE_P_H
#define SOLID_MANAGERBASE_P_H

#include <QObject>

#include "solid/solid_export.h"

namespace Solid
{
class ManagerBasePrivate
{
public:
    ManagerBasePrivate();
    virtual ~ManagerBasePrivate();
    void loadBackends();

    QList<QObject *> managerBackends() const;

private:
    QList<QObject *> m_backends;
};
}

#endif
