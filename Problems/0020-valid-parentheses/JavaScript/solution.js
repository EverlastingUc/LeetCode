var isValid = function(s) {
    const pairs = { ')': '(', ']': '[', '}': '{' };
    const stack = [];
    for (const char of s) {
        if (Object.hasOwn(pairs, char)) {
            if (stack.length === 0 || stack.pop() !== pairs[char]) return false;
        } else stack.push(char);
    }
    return stack.length === 0;
};
