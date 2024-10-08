#include "Weapon.h"

#include <string>

const std::string& Weapon::getType() { return this->type_; }

void Weapon::setType(const std::string& type) { this->type_ = type; }
