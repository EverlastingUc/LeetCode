
/**
 * @param {string[][]} tickets
 * @return {string[]}
 */
var findItinerary = function(tickets) {
    const graph = new Map();

    for (const [from, to] of tickets) {
        if (!graph.has(from)) graph.set(from, []);
        graph.get(from).push(to);
    }

    for (const destinations of graph.values()) {
        destinations.sort().reverse();
    }

    const result = [];

    function dfs(airport) {
        const destinations = graph.get(airport);

        while (destinations && destinations.length) {
            dfs(destinations.pop());
        }

        result.push(airport);
    }

    dfs("JFK");

    return result.reverse();
};
