#ifndef STYLEHELPER_H
#define STYLEHELPER_H
#include <QString>
class QToolButton;

class StyleHelper
{
public:
    enum MapIconsType{
        Back,
        Path,
        Ruler,
        Start,
        Move
    };
    StyleHelper();
    void static setFonts();
    QString static getMapStyleDark();
    void static setToolButtonStyleDark(QToolButton* btn, MapIconsType type, bool active=false);
    QString static getEndPathButtonStyle();
    QString static getMapIconButtonStyle();
    QString static getSpinBoxStyle();
    QString static getColorButtonStyle(QString color);
private:
    QString static darkBgTop;
    QString static darkBgRight;

};

#endif // STYLEHELPER_H
