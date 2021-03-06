/****************************************************************************
 *
 *   (c) 2009-2016 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/


/// @file
///     @author Don Gagne <don@thegagnes.com>

#ifndef SettingsFact_H
#define SettingsFact_H

#include "Fact.h"

/// @brief A SettingsFact is Fact which holds a QSettings value.
class SettingsFact : public Fact
{
    Q_OBJECT
    
public:
    SettingsFact(QObject* parent = NULL);
    SettingsFact(QString settingGroup, FactMetaData* metaData, QObject* parent = NULL);
    SettingsFact(const SettingsFact& other, QObject* parent = NULL);

    const SettingsFact& operator=(const SettingsFact& other);

    Q_PROPERTY(bool visible MEMBER _visible CONSTANT)

private slots:
    void _rawValueChanged(QVariant value);

private:
    QString _settingGroup;
    bool    _visible;
};

#endif
