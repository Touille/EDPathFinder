//
//  Copyright (C) 2016  David Hedbor <neotron@gmail.com>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef EDPATHFINDER_VERSION_H
#define EDPATHFINDER_VERSION_H


#include <QString>

class Version {
public:
    Version();
    explicit  Version(const QString &version);

    bool operator==(const Version &rhs) const {
        return _versionInt == rhs._versionInt;
    }

    bool operator!=(const Version &rhs) const {
        return !(rhs == *this);
    }

    bool operator<(const Version &rhs) const {
        return _versionInt < rhs._versionInt;
    }

    bool operator>(const Version &rhs) const {
        return _versionInt > rhs._versionInt;
    }

    bool operator<=(const Version &rhs) const {
        return _versionInt <= rhs._versionInt;
    }

    bool operator>=(const Version &rhs) const {
        return _versionInt <= rhs._versionInt;
    }

    const QString toString() const { return _version; }
private:
    void parseVersion();

    QString _version;
    qint64 _versionInt;
};


#endif //EDPATHFINDER_VERSION_H
