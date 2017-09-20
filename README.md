Copyright (C) 2009 -until todayThe Bitcoin Core Developers
Copyright (C) 2015 -until today The Dash and PIVX Core Developers
Copyright (C) 2017 -until todayThe BTDX Core Developers

DMD Core integration/staging repository
=====================================

[![Build Status](https://travis-ci.org/DMD-Project/DMD.svg?branch=master)](https://travis-ci.org/DMD-Project/DMD) [![GitHub version](https://badge.fury.io/gh/DMD-Project%2FDMD.svg)](https://badge.fury.io/gh/DMD-Project%2FDMD)

DMD is a cutting edge cryptocurrency, with many features not available in most other cryptocurrencies.
- Anonymized transactions using coin mixing technology, we call it _mixTX_.
- Fast transactions featuring guaranteed zero confirmation transactions, we call it _quickTX_.
- Decentralized blockchain voting providing for consensus based advancement of the current Masternode
  technology used to secure the network and provide the above features, each Masternode is secured
  with collateral of 10000 DMD

More information at http://bit.diamonds/ Visit our ANN thread at [BitcoinTalk](https://bitcointalk.org/index.php?topic=580725.0)
--

### Coin Specs
<table>
<tr><td>Algo</td><td>Quark</td></tr>
<tr><td>Block Time</td><td>135 Seconds</td></tr>
<tr><td>Difficulty Retargeting</td><td>Every Block</td></tr>
</table>



### Reward Distribution

<table>
<th colspan=4>PoW Phase</th>
<tr><th>Block Height</th><th>Reward Amount</th><th>Notes</th><th>Duration (Days)</th></tr>
<tr><td>1</td><td>~2.4 MIO DMD</td><td>Old Chain Total Balance snapshot send out to same addresses in DMDv3 chain</td><td>0 Days</td></tr>
<tr><td>2-750</td><td>0.0235 DMD</td><td rowspan=2>Open Mining</td><td rowspan=2> Approx 1/2 Days</td></tr>
<tr><th colspan=4>PoS Phase</th></tr>
<tr><th>Block Height</th><th colspan=3>Reward Amount</th></tr>
<tr><td>750-Infinite</td><td colspan=3>see PoS Rewards Breakdown</td></tr>
</table>


### PoS Rewards Breakdown

<table>
<th>Phase</th><th>Block Height</th><th>Reward</th><th>Masternodes</th><th>Stakers</th>
<tr><td>slow startup</td><td>750-4480 </td><td>0,0235 DMD</td><td>65% </td><td>35% </td></tr>
<tr><td>Phase 1</td><td>4480-115200 </td><td>2,35 DMD</td><td>65% </td><td>35% </td></tr>
<tr><td>Phase 2</td><td>115200-691200 </td><td>2,35 - 0,5 DMD</td><td>65% </td><td>35% </td></tr>
<tr><td>Phase 3</td><td>691200-2284800 </td><td>0,5 - 0,156 DMD</td><td>65% </td><td>35% </td></tr>
<tr><td>Phase 4</td><td>2284800+ </td><td>0,1563 DMD</td><td>65% </td><td>35% </td></tr>
</table>
