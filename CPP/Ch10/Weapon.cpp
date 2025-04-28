#include "Weapon.h"

int Weapon::DoUpgrade()
{
    return lv*(baseATK+weight);
}

void Weapon::ShowInfo()
{
    cout << DoUpgrade();
}

void Weapon::Attack()
{
    cout << DoUpgrade() << "의 데미지" << endl;
}

void Weapon::Upgrade()
{
    DoUpgrade();
}

void Sword::Attack()
{
    Weapon::Attack();
    cout << "검으로 베어냅니다" << endl;
}

void Sword::Upgrade()
{
    finalATK = DoUpgrade() + 10;
    cout << finalATK << " 검 공격력 상승" << endl;
}

void Spear::Attack()
{
    Weapon::Attack();
    cout << "창으로 찌릅니다" << endl;
}

void Spear::Upgrade()
{
    finalATK = DoUpgrade() + specialATK;
    cout << finalATK << " 창 공격력 상승" << endl;
}

void Bow::Attack()
{
    Weapon::Attack();
    cout << " 활로 휘두릅니다." << endl;
}

void Bow::Upgrade()
{
    finalATK = DoUpgrade();
    cout << finalATK << " 활 공격력 상승" << endl;
}
