'use strict';

const fs = require('fs');

process.stdin.resume();
process.stdin.setEncoding('utf-8');

let inputString = '';
let currentLine = 0;

process.stdin.on('data', inputStdin => {
    inputString += inputStdin;
});

process.stdin.on('end', function() {
    inputString = inputString.replace(/\s*$/, '')
        .split('\n')
        .map(str => str.replace(/\s*$/, ''));

    main();
});

function readLine() {
    return inputString[currentLine++];
}

// Complete the rotLeft function below.
function rotLeft(a, d) { 
    // of an array
    // takes d elements a the end of the array
    // places it at the front
    // and takes first d elements
    // and places it towards the back
    return [...a.slice(d), ...a.slice(0, d)]
}

function main() {
    const ws = fs.createWriteStream(process.env.OUTPUT_PATH);

    const nd = readLine().split(' ');

    const n = parseInt(nd[0], 10);

    const d = parseInt(nd[1], 10);

    const a = readLine().split(' ').map(aTemp => parseInt(aTemp, 10));

    const result = rotLeft(a, d);

    ws.write(result.join(' ') + '\n');

    ws.end();
}
