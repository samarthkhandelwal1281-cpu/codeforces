<h2><a href="https://codeforces.com/contest/1927/problem/A" target="_blank" rel="noopener noreferrer">1927A — Make it White</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++17 (GCC 7-32) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1927A](https://codeforces.com/contest/1927/problem/A) |

## Topics
`greedy` `strings`

---

## Problem Statement

<div class="header"><div class="title">A. Make it White</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You have a horizontal strip of $$$n$$$ cells. Each cell is either white or black.</p><p>You can choose a <span class="tex-font-style-bf">continuous</span> segment of cells once and paint them all white. After this action, all the black cells in this segment will become white, and the white ones will remain white.</p><p>What is the minimum length of the segment that needs to be painted white in order for all $$$n$$$ cells to become white?</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases. The descriptions of the test cases follow.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 10$$$) — the length of the strip.</p><p>The second line of each test case contains a string $$$s$$$, consisting of $$$n$$$ characters, each of which is either <span class="tex-font-style-tt">'W'</span> or <span class="tex-font-style-tt">'B'</span>. The symbol <span class="tex-font-style-tt">'W'</span> denotes a white cell, and <span class="tex-font-style-tt">'B'</span> — a black one. It is guaranteed that at least one cell of the given strip is black.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single number — the minimum length of a <span class="tex-font-style-bf">continuous</span> segment of cells that needs to be painted white in order for the <span class="tex-font-style-bf">entire</span> strip to become white.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009454724961313662" id="id009461735725280833" class="input-output-copier">Copy</div></div><pre id="id009454724961313662"><div class="test-example-line test-example-line-even test-example-line-0">8</div><div class="test-example-line test-example-line-odd test-example-line-1">6</div><div class="test-example-line test-example-line-odd test-example-line-1">WBBWBW</div><div class="test-example-line test-example-line-even test-example-line-2">1</div><div class="test-example-line test-example-line-even test-example-line-2">B</div><div class="test-example-line test-example-line-odd test-example-line-3">2</div><div class="test-example-line test-example-line-odd test-example-line-3">WB</div><div class="test-example-line test-example-line-even test-example-line-4">3</div><div class="test-example-line test-example-line-even test-example-line-4">BBW</div><div class="test-example-line test-example-line-odd test-example-line-5">4</div><div class="test-example-line test-example-line-odd test-example-line-5">BWWB</div><div class="test-example-line test-example-line-even test-example-line-6">6</div><div class="test-example-line test-example-line-even test-example-line-6">BWBWWB</div><div class="test-example-line test-example-line-odd test-example-line-7">6</div><div class="test-example-line test-example-line-odd test-example-line-7">WWBBWB</div><div class="test-example-line test-example-line-even test-example-line-8">9</div><div class="test-example-line test-example-line-even test-example-line-8">WBWBWWWBW</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0023161933724867445" id="id000014580838910607241" class="input-output-copier">Copy</div></div><pre id="id0023161933724867445">4
1
1
2
4
6
4
7
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case of the example for the strip "<span class="tex-font-style-tt">WBBWBW</span>", the minimum length of the segment to be repainted white is $$$4$$$. It is necessary to repaint to white the segment from the $$$2$$$-nd to the $$$5$$$-th cell (the cells are numbered from $$$1$$$ from left to right).</p></div>