#include "Sample.h"

Sample::Sample(): n{0} {}
Sample::~Sample() = default;
void Sample::SetN(int set) {
    n = set;
}
int Sample::GetN() {
    return n;
}