##############################
# Country definition for USA #
##############################

#####################
# Country main data #
#####################

country = {
  tag                = USA
  ai_settings        = { flags = { MOB1 = 1 MOB2 = 1 MOB3 = 1 } }
  capital            = 1809 # Washington
  manpower           = 445
  # Resource Reserves
  energy         = 5000
  metal          = 5000
  rare_materials = 2500
  oil            = 500
  supplies       = 10000
  money          = 1000
  transports     = 2000
  escorts        = 800

  diplomacy = {
    relation = {
      tag        = ARG
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = AST value = 0 access = yes }
    relation = { tag = BEL value = 75 }
    relation = {
      tag        = BOL
      value      = 85
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = BRA
      value      = 120
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = CHL
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = COL
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = COS
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = CUB
      value      = 200
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = DEN value = 75 }
    relation = { tag = DFR value = 150 access = yes }
    relation = {
      tag        = DOM
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = ECU
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = ENG value = 150 access = yes }
    relation = { tag = FRA value = 50 access = yes }
    relation = {
      tag        = GUA
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = HAI
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = HOL value = 70 access = yes }
    relation = {
      tag        = HON
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = IRE value = 75 }
    relation = { tag = IRQ value = 120 }
    relation = {
      tag        = JAP
      value      = 150
      access     = yes
      guaranteed = { year = 1945 month = september day = 1 }
    }
    relation = { tag = KOR value = 150 access = yes }
    relation = { tag = LIB value = 200 access = yes }
    relation = {
      tag        = MEX
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = NEP value = 100 }
    relation = {
      tag        = NIC
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = NOR value = 75 }
    relation = { tag = NZL value = 125 }
    relation = { tag = OMN value = 100 }
    relation = {
      tag        = PAN
      value      = 175
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = PAR
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = PHI value = 200 access = yes }
    relation = {
      tag        = PRU
      value      = 75
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SAF value = 125 }
    relation = {
      tag        = SCH
      value      = 0
      guaranteed = { year = 1935 month = may day = 16 }
    }
    relation = {
      tag        = SAL
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = SWE value = 75 }
    relation = {
      tag        = URU
      value      = 100
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = {
      tag        = VEN
      value      = 125
      guaranteed = { year = 1935 month = december day = 29 }
    }
    relation = { tag = YEM value = 100 }
    relation = { tag = ITA value = 100 access = yes }
    relation = { tag = ICL value = 200 access = yes }
    relation = { tag = TUR value = 20 access = yes }
  }
  SpyInfo                = { country = "POR" NumberOfSpies = 3 }
  SpyInfo                = { country = "SOV" NumberOfSpies = 5 }
  SpyInfo                = { country = "SPA" NumberOfSpies = 5 }
  SpyInfo                = { country = "ARG" NumberOfSpies = 2 }
  SpyInfo                = { country = "TUR" NumberOfSpies = 2 }
  SpyInfo                = { country = "SWE" NumberOfSpies = 2 }
  SpyInfo                = { country = "CHI" NumberOfSpies = 4 }
  SpyInfo                = { country = "FIN" NumberOfSpies = 2 }
  SpyInfo                = { country = "USA" NumberOfSpies = 5 }

  nationalprovinces      = { 889 1765 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 }
  ownedprovinces         = { 889 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1673 1674 1675 1676 1677 1681 1683 1684 1685 1686 1731 1732 1733 1734 1735 1736 1737 1738 1739 1745 1747 1750 1751 1765 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 1562 }
  controlledprovinces    = { 889 1563 1564 1661 1662 1663 1664 1665 1666 1667 1668 1669 1670 1671 1672 1673 1674 1675 1676 1677 1681 1683 1684 1685 1686 1731 1732 1733 1734 1735 1736 1737 1738 1739 1745 1747 1750 1751 1765 1778 1784 1785 1786 1787 1788 1789 1790 1791 1792 1793 1794 1795 1796 1797 1798 1799 1800 1801 1802 1803 1804 1805 1806 1807 1808 1809 1810 1811 1812 1813 1814 1815 1816 1817 1818 1819 1820 1821 1822 1823 1824 1825 1826 1827 1828 1829 1830 1831 1832 1833 1834 1835 1836 1837 1838 1839 1840 1841 1842 1843 1844 1845 1846 1847 1848 1849 1850 1851 1852 1853 1854 1855 1856 1857 1858 1859 1860 1861 1862 1863 1864 1865 1866 1867 1868 1869 1870 1871 1872 1873 1874 1875 1876 1877 1878 1879 1880 1881 1882 1883 1884 1885 1886 1887 1888 1889 1890 1891 1892 1893 1894 1895 1896 1897 1898 1899 1900 1901 1902 1903 1904 1905 1906 1907 1908 1909 1910 1911 1912 1913 1914 1915 1916 1917 1918 1919 1920 1921 1922 1923 1924 1925 1926 1927 1928 1929 1930 1931 1932 1933 1934 1935 1936 1937 1938 1939 1940 1941 1942 1943 1944 1945 1946 1947 1948 1949 1950 1951 1952 1953 1954 1955 1956 1957 1958 1959 1960 1961 1962 1963 1964 2139 2140 2141 2142 2143 2144 2145 2146 2147 2150 2151 2174 1562 }

  techapps               = { 9040 9050 9060 9070 9080 9090 9100 9110 9120 9130 9140 9150 9160 9170 9180 9190 9200 9210 9220 9230 9240 9250 9260 9270 9280 9290 9300 9310 9320 9330 9340 9350 9360 9370 9380 9390 9400 9410 9420 9430 9440 9450 9460 27000 27010 27020 27070 27080 27140 27150 27210 27220 27410 27460 27470 9010 9020 9030 27480 27490 27500 27510 27520 27530 27540 27550 27560 27570 27580 27590 27600 4500 4510 4520 4530 4540 4550 4010 4020 4030 4060 4090 15000 15010 15020 4300 4310 4320 4330 4340 4040 4070 4100 4350 15030 15040 4050 4080 4110 4116 15060 4890 4600 4400 4170 4280 4450 4180 15120 4610 4620 4630 4120 4130 4140 4150 4160 15100 15110 4800 4810 4820 4220 4230 4240 4246 15160 4700 4710 4190 4200 4210 15140 15150 4290 4250 4260 4270 15180 15190 4740 4750 4760 4770 4780 4790 4850 4860 4440 4460 4900 4910 4920 4930 4940 4950 4960 2620 2010 2630 2640 2646 2650 2030 2040 2050 2060 2070 2080 2090 2140 11000 2170 2180 2850 2190 2200 2100 2110 2120 2126 2130 2860 2870 2880 2020 2150 2160 2890 2290 2300 2310 2900 2910 2920 2930 2940 2320 2330 2340 2360 2950 2220 2230 2240 2250 11030 2400 2410 2420 2430 2970 2370 2380 2390 2800 2450 21180 21190 21200 2460 2470 2480 2490 2500 2810 2820 2510 2520 2530 2540 22910 22920 22930 22940 2980 2260 2270 2280 21070 5700 5710 5010 5020 5030 5040 5720 5810 5820 5050 5830 5060 5070 5130 5110 5120 5140 5150 5160 5170 5180 5800 5080 5090 5100 5900 53040 5560 5310 54010 54020 54030 5320 5330 5340 5316 5326 5327 5350 5360 5370 5380 5390 5400 53060 5760 5410 5416 5417 5420 5426 5430 5440 5466 5450 5460 5190 5200 5210 5220 5230 5240 53020 53190 5470 5480 5490 5500 5510 5520 5530 5540 5600 5610 5620 5630 5640 5650 5660 14000 14010 14020 14030 14040 5920 5930 5940 5950 5960 5970 5980 5990 1010 1020 1030 1040 1050 1060 1070 1080 1090 1100 1110 1120 1130 1140 1160 1170 1180 1190 1200 1210 1220 1230 1240 1250 1260 1270 1280 1290 13390 13400 13060 13070 13080 1310 1320 1330 1340 1350 1360 1370 1380 1390 1530 1540 1396 1400 1410 1420 1430 1470 1480 1490 1560 1570 1580 1590 1600 1610 1620 1630 1670 1680 1690 1700 1710 1830 1840 1850 1860 1870 1880 1910 1920 1930 1940 1950 1960 1970 1980 1990 199100 199110 199120 199130 199140 199150 199160 6500 6510 6530 6580 6610 6680 6620 6630 6640 6710 6650 6660 6670 6540 6910 6900 6010 6020 6040 6050 6060 6070 6080 6100 6090 14050 6790 8010 8020 8030 8040 8050 8060 8070 8080 8100 8110 8120 8150 8160 8170 8200 8210 8220 8230 8240 8250 8260 8300 8500 8510 8520 8550 8560 8570 8600 8610 8620 8630 8640 8650 8660 8700 8900 8910 8920 8930 8940 8950 8960 8970 8980 81050 81060 81070 81650 81850 81860 81870 81880 81890 81900 81910 81700 81710 81720 81730 81740 81750 81760 82100 82110 82300 82310 82320 82330 7990 82500 82510 82520 3010 3020 3030 3040 3050 3060 3070 12000 3080 3110 3120 3130 3140 3150 3160 12010 3170 12190 12200 3210 3220 3230 3240 3250 3260 12020 3270 3310 3320 3330 3340 3350 3410 3420 3430 3440 3450 3456 3460 3470 3480 12040 3490 12050 3510 3520 3530 3540 3550 12060 3560 12100 12110 12120 12130 12140 12150 12160 3610 3620 3630 3640 3650 3660 3670 3680 3690 3710 3810 3820 3830 3840 3850 3900 3910 3920 3930 3890 3960 3720 3730 3736 3740 3750 3760 3770 3780 7010 7020 15500 7600 7610 7550 7560 7570 7580 7590 7100 7110 7120 7140 7150 16000 7170 7180 7190 16010 7810 7270 7620 7630 9000 30000 30020 30030 30040 30070 }
  inventions             = { 3000011 3000012 3000015 3000016 3000017 3000018 3000019 3000020 3000024 3000026 3000027 3000028 3000031 3000041 3000045 3000046 3000047 3000049 3000052 }

  policy = {
    date              = { year = 0 month = january day = 0 }
    democratic        = 10
    political_left    = 6
    freedom           = 10
    free_market       = 10
    professional_army = 3
    defense_lobby     = 8
    interventionism   = 5
  }
  headofstate            = { type = 9 id = 240013 } # Harry S. Truman
  headofgovernment       = { type = 9 id = 240025 } # Alben W. Barkley
  foreignminister        = { type = 9 id = 240040 } # George C. Marshall
  armamentminister       = { type = 9 id = 240177 } # John W. Snyder
  ministerofsecurity     = { type = 9 id = 240005 } # J. Edgar Hoover
  ministerofintelligence = { type = 9 id = 240097 } # Roscoe H. Hillenkoetter
  chiefofstaff           = { type = 9 id = 240190 } # Omar N. Bradley
  chiefofarmy            = { type = 9 id = 240191 } # Joseph Lawton Collins
  chiefofnavy            = { type = 9 id = 240192 } # Louis E.Denfeld
  chiefofair             = { type = 9 id = 240195 } # Hoyt Vandenberg
  dormant_ministers      = { 240015 240003 240116 240042 240012 240062 240036 240007 240008 240070 240135 240009 240125 240121 240010 240052 240086 240001 }

  landunit = {
    id       = { type = 30301 id = 1 }
    name     = "II Corps"
    location = 1878
    division = {
      id             = { type = 30304 id = 1 }
      name           = "88th Mech Division"
      type           = mechanized
      model          = 2
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 2 }
      name           = "34th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 3 }
      name           = "91st Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 3 }
    name     = "1st Army HQ"
    location = 148
    division = {
      id             = { type = 30304 id = 5 }
      name           = "1st Army HQ"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 4 }
    name     = "3rd Army HQ"
    location = 138
    division = {
      id             = { type = 30304 id = 6 }
      name           = "3rd Army HQ"
      type           = hq
      model          = 5
      extra          = police
      brigade_model  = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 5 }
    name     = "7th Army HQ"
    location = 1552
    division = {
      id             = { type = 30304 id = 7 }
      name           = "7th Army HQ"
      type           = hq
      model          = 5
      extra          = police
      brigade_model  = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 6 }
    name     = "XVI Corps"
    location = 137
    division = {
      id             = { type = 30304 id = 8 }
      name           = "29th Mech Division"
      type           = mechanized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 9 }
      name           = "75th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 10 }
      name           = "79th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 11 }
      name           = "95th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 7 }
    name     = "XIII Corps"
    location = 138
    division = {
      id             = { type = 30304 id = 12 }
      name           = "39th Mech Division"
      type           = mechanized
      model          = 2
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 13 }
      name           = "76th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 14 }
      name           = "84th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 15 }
      name           = "35th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 16 }
      name           = "83rd Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 17 }
      name           = "102nd Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 18 }
      name           = "5th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 8 }
    name     = "XIX Corps"
    location = 148
    division = {
      id             = { type = 30304 id = 19 }
      name           = "2nd Armoured Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 20 }
      name           = "8th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 21 }
      name           = "3rd Armoured Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 9 }
    name     = "VII Corps"
    location = 192
    division = {
      id             = { type = 30304 id = 22 }
      name           = "9th Mech Division"
      type           = mechanized
      model          = 2
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 23 }
      name           = "104th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 24 }
      name           = "69th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 10 }
    name     = "III Corps"
    location = 140
    division = {
      id             = { type = 30304 id = 25 }
      name           = "4th Mech Division"
      type           = mechanized
      model          = 2
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 26 }
      name           = "99th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 27 }
      name           = "14th Armoured Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 11 }
    name     = "V Corps"
    location = 177
    division = {
      id             = { type = 30304 id = 28 }
      name           = "97th Mech Division"
      type           = mechanized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 29 }
      name           = "78th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 30 }
      name           = "16th Armoured Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 31 }
      name           = "9th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 12 }
    name     = "VIII Corps"
    location = 175
    division = {
      id             = { type = 30304 id = 32 }
      name           = "70th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 33 }
      name           = "87th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 34 }
      name           = "89th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 35 }
      name           = "6th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 13 }
    name     = "XII Corps"
    location = 1552
    division = {
      id             = { type = 30304 id = 36 }
      name           = "5th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 37 }
      name           = "26th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 38 }
      name           = "90th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 39 }
      name           = "4th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 40 }
      name           = "11th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 41 }
      name           = "1st Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 14 }
    name     = "XX Corps"
    location = 179
    division = {
      id             = { type = 30304 id = 42 }
      name           = "65th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 43 }
      name           = "71st Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 44 }
      name           = "2nd Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 45 }
      name           = "80th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 46 }
      name           = "13th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 15 }
    name     = "XXI Corps"
    location = 137
    division = {
      id             = { type = 30304 id = 47 }
      name           = "36th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 48 }
      name           = "63rd Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 49 }
      name           = "12th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 50 }
      name           = "101st Infantry Division"
      type           = paratrooper
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 16 }
    name     = "XV Corps"
    location = 1878
    division = {
      id             = { type = 30304 id = 51 }
      name           = "3rd Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 52 }
      name           = "42nd Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 53 }
      name           = "45th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 54 }
      name           = "86th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 55 }
      name           = "20th Armoured Division"
      type           = armor
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 17 }
    name     = "VI Corps"
    location = 174
    division = {
      id             = { type = 30304 id = 56 }
      name           = "44th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 57 }
      name           = "100th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 58 }
      name           = "103rd Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 18 }
    name     = "XVII Airborne Corps"
    location = 1874
    division = {
      id             = { type = 30304 id = 59 }
      name           = "8th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 60 }
      name           = "13th Airborne Division"
      type           = paratrooper
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 61 }
      name           = "7th Armoured Division"
      type           = armor
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 62 }
      name           = "82nd Airborne Division"
      type           = paratrooper
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 20 }
    name     = "XXII Corps"
    location = 1558
    division = {
      id             = { type = 30304 id = 64 }
      name           = "94th Infantry Division"
      type           = motorized
      model          = 4
      extra          = tank_destroyer
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 65 }
      name           = "17th Airborne Division"
      type           = paratrooper
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 176 }
      name           = "10th Mountain Division"
      type           = bergsjaeger
      model          = 13
      extra          = artillery
      brigade_model  = 12
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 21 }
    name     = "XXIII Corps"
    location = 1549
    division = {
      id             = { type = 30304 id = 66 }
      name           = "28th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 67 }
      name           = "66th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 68 }
      name           = "106th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 22 }
    name     = "6th Army HQ"
    location = 1554
    division = {
      id             = { type = 30304 id = 69 }
      name           = "6th Army HQ"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 23 }
    name     = "8th Army HQ"
    location = 187
    division = {
      id             = { type = 30304 id = 70 }
      name           = "8th Army HQ"
      type           = hq
      model          = 5
      extra          = police
      brigade_model  = 2
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 24 }
    name     = "10th Army HQ"
    location = 148
    division = {
      id             = { type = 30304 id = 71 }
      name           = "10th Army HQ"
      type           = hq
      model          = 5
      extra          = anti_air
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 25 }
    name     = "V amphibious Corps"
    location = 1554
    division = {
      id             = { type = 30304 id = 72 }
      name           = "2nd Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 73 }
      name           = "5th Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 74 }
      name           = "3rd Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 26 }
    name     = "III amphibious Corps"
    location = 1564
    division = {
      id             = { type = 30304 id = 75 }
      name           = "4th Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 76 }
      name           = "6th Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 77 }
      name           = "1st Marine Division"
      type           = marine
      model          = 7
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 27 }
    name     = "XXIV Corps"
    location = 1554
    division = {
      id             = { type = 30304 id = 78 }
      name           = "96th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 79 }
      name           = "7th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 80 }
      name           = "27th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 28 }
    name     = "X Corps"
    location = 187
    division = {
      id             = { type = 30304 id = 81 }
      name           = "24th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 82 }
      name           = "31st Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 29 }
    name     = "I Corps"
    location = 148
    division = {
      id             = { type = 30304 id = 83 }
      name           = "25th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 84 }
      name           = "41st Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 85 }
      name           = "33rd Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 30 }
    name     = "XI Corps"
    location = 180
    division = {
      id             = { type = 30304 id = 86 }
      name           = "6th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 87 }
      name           = "43rd Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 88 }
      name           = "Americal Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 31 }
    name     = "IX Corps"
    location = 1554
    division = {
      id             = { type = 30304 id = 89 }
      name           = "77th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 90 }
      name           = "98th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 91 }
      name           = "11th Airbourne Division"
      type           = paratrooper
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 32 }
    name     = "XIV Corps"
    location = 1554
    division = {
      id             = { type = 30304 id = 92 }
      name           = "40th Infantry Division"
      type           = motorized
      model          = 4
      extra          = engineer
      brigade_model  = 5
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 93 }
      name           = "37th Infantry Division"
      type           = motorized
      model          = 4
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 33 }
    name     = "Panama Canal Force"
    location = 889
    division = {
      id             = { type = 30304 id = 94 }
      name           = "Panama Canal Garrison"
      type           = garrison
      model          = 6
      extra          = artillery
      brigade_model  = 12
      locked         = yes
    }
  }
  landunit = {
    id       = { type = 30301 id = 34 }
    name     = "East Coast HQ"
    location = 1809
    division = {
      id             = { type = 30304 id = 95 }
      name           = "East Coast HQ"
      type           = hq
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 35 }
    name     = "East Coast Reserves"
    location = 1809
    division = {
      id             = { type = 30304 id = 96 }
      name           = "97th Infantry Division"
      type           = mechanized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 97 }
      name           = "92nd Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 98 }
      name           = "89th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 99 }
      name           = "87th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 100 }
      name           = "86th Infantry Division"
      type           = mechanized
      model          = 2
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 36 }
    name     = "West Coast HQ"
    location = 1889
    division = {
      id             = { type = 30304 id = 101 }
      name           = "West Coast HQ"
      type           = hq
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 37 }
    name     = "West Coast Reserves"
    location = 1889
    division = {
      id             = { type = 30304 id = 102 }
      name           = "36th Infantry Division"
      type           = mechanized
      model          = 2
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 103 }
      name           = "39th Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 104 }
      name           = "21st Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 105 }
      name           = "22nd Infantry Division"
      type           = motorized
      model          = 4
      extra          = sp_artillery
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30304 id = 106 }
      name           = "76th Infantry Division"
      type           = mechanized
      model          = 2
      extra          = engineer
      brigade_model  = 5
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 38 }
    name     = "ME Garrison"
    location = 1784
    division = {
      id             = { type = 30304 id = 107 }
      name           = "1st ME National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 40 }
    name     = "DE Garrison"
    location = 1807
    division = {
      id             = { type = 30304 id = 113 }
      name           = "1st DE National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 41 }
    name     = "VA Garrison"
    location = 1812
    division = {
      id             = { type = 30304 id = 116 }
      name           = "1st VA National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 42 }
    name     = "SC Garrison"
    location = 1960
    division = {
      id             = { type = 30304 id = 119 }
      name           = "1st SC National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 43 }
    name     = "GA Garrison"
    location = 1956
    division = {
      id             = { type = 30304 id = 122 }
      name           = "1st GA National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 44 }
    name     = "FL Garrison"
    location = 1952
    division = {
      id             = { type = 30304 id = 125 }
      name           = "1st FL National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 45 }
    name     = "LA Garrison"
    location = 1931
    division = {
      id             = { type = 30304 id = 128 }
      name           = "1st LA National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 46 }
    name     = "TX Garrison"
    location = 1928
    division = {
      id             = { type = 30304 id = 131 }
      name           = "1st TX National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  landunit = {
    id       = { type = 30301 id = 49 }
    name     = "CA Garrison"
    location = 1889
    division = {
      id             = { type = 30304 id = 140 }
      name           = "4th CA National Guard Division"
      type           = garrison
      model          = 6
      strength       = 100
      experience     = 15
    }
  }

  navalunit = {
    id       = { type = 30302 id = 1 }
    name     = "Task Group 38.1"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 309 }
      name           = "USS Bennington"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 22 }
      name           = "USS Lexington"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 400 }
      name           = "USS Belleau Wood"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 3 }
      name           = "USS Independence"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 333 }
      name           = "USS Dayton"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 313 }
      name           = "USS Duluth"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 334 }
      name           = "USS Topeka"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 8 }
      name           = "1st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 2 }
    name     = "Task Force 44"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 129 }
      name           = "USS Chester"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 130 }
      name           = "USS Pensacola"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 131 }
      name           = "USS Salt Lake City"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 3 }
    name     = "Task Group 38.3"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 401 }
      name           = "USS Monterey"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 176 }
      name           = "USS Pasadena"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 323 }
      name           = "USS Springfield"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 314 }
      name           = "USS Wilkes-Barre"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 7 }
      name           = "USS Oakland"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 4 }
    name     = "Task Group 38.4"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 318 }
      name           = "USS Shangri La"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 2 }
      name           = "USS Yorktown"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 13 }
      name           = "USS Cowpens"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 80 }
      name           = "USS Iowa"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 330 }
      name           = "USS Chicago"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 222 }
      name           = "USS Quincy"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 335 }
      name           = "USS Saint Paul"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 9 }
      name           = "2nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 10 }
      name           = "3rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 5 }
    name     = "Task Force 50"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 133 }
      name           = "USS Detroit"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 6 }
    name     = "Task Group 38.6"
    location = 1683
    base     = 1683
    division = {
      id             = { type = 30305 id = 310 }
      name           = "USS Boxer"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 46 }
      name           = "USS Pennsylvania"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      strength       = 80
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 338 }
      name           = "USS Atlanta"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 174 }
      name           = "USS Columbia"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 60 }
      name           = "1st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 61 }
      name           = "2nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 62 }
      name           = "3rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 63 }
      name           = "4th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 64 }
      name           = "5th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 65 }
      name           = "6th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 66 }
      name           = "50th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 67 }
      name           = "51st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 68 }
      name           = "52nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 69 }
      name           = "53rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 70 }
      name           = "54th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 71 }
      name           = "55th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 72 }
      name           = "56th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 73 }
      name           = "57th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 74 }
      name           = "58th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 75 }
      name           = "59th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 76 }
      name           = "60th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 77 }
      name           = "61st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 7 }
    name     = "Task Force 34"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 81 }
      name           = "USS New Jersey"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 47 }
      name           = "USS Tennessee"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 88 }
      name           = "USS Wichita"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 89 }
      name           = "13th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 90 }
      name           = "14th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 91 }
      name           = "15th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 8 }
    name     = "Task Force 70"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 95 }
      name           = "25th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 96 }
      name           = "26th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 97 }
      name           = "27th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 98 }
      name           = "28th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 9 }
    name     = "Task Force 71"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 99 }
      name           = "29th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 100 }
      name           = "30th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 101 }
      name           = "31st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 102 }
      name           = "7th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 103 }
      name           = "8th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 104 }
      name           = "9th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 105 }
      name           = "10th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 106 }
      name           = "11th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 107 }
      name           = "12th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 108 }
      name           = "62nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 109 }
      name           = "63rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 110 }
      name           = "64th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 111 }
      name           = "65th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 112 }
      name           = "66th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 113 }
      name           = "67th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 114 }
      name           = "68th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 115 }
      name           = "69th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 116 }
      name           = "70th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 117 }
      name           = "71st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 118 }
      name           = "72nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 119 }
      name           = "73rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 10 }
    name     = "Task Group 73.1"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 311 }
      name           = "USS Antietam"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 402 }
      name           = "USS Cabot"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 86 }
      name           = "USS New Orleans"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 223 }
      name           = "USS Tuscaloosa"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 53 }
      name           = "USS St. Louis"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 55 }
      name           = "20th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 56 }
      name           = "21st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 57 }
      name           = "22nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 339 }
    name     = "Task Group 73.2"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 170 }
      name           = "USS Alaska"
      type           = battlecruiser
      model          = 4
      extra1         = naval_fire_controll_l
      extra2         = none
      extra3         = naval_anti_air_l
      extra4         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 5
      brigade_model4 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 324 }
      name           = "USS Guam"
      type           = battlecruiser
      model          = 4
      extra1         = naval_fire_controll_l
      extra2         = none
      extra3         = naval_anti_air_l
      extra4         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 2
      brigade_model3 = 5
      brigade_model4 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 93 }
      name           = "USS Nashville"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 54 }
      name           = "19th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 340 }
    name     = "Task Group 73.3"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 85 }
      name           = "USS Minneapolis"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 87 }
      name           = "USS San Francisco"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 52 }
      name           = "USS Louisville"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 58 }
      name           = "23rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 59 }
      name           = "24th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 11 }
    name     = "South Pacific Transport Squadron"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 121 }
      name           = "32nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 122 }
      name           = "33rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 123 }
      name           = "13th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 124 }
      name           = "14th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 125 }
      name           = "74th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 126 }
      name           = "75th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 127 }
      name           = "76th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 128 }
      name           = "77th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 12 }
    name     = "Task Force 42"
    location = 2142
    base     = 2142
    division = {
      id             = { type = 30305 id = 136 }
      name           = "34th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 137 }
      name           = "35th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 13 }
    name     = "Task Group 43.2"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 138 }
      name           = "36th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 139 }
      name           = "15th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 140 }
      name           = "16th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 141 }
      name           = "78th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 142 }
      name           = "79th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 143 }
      name           = "80th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 144 }
      name           = "81st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 14 }
    name     = "Pacific Fleet Base Group"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 148 }
      name           = "USS Ticonderoga"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 1 }
      name           = "USS Hornet"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 21 }
      name           = "USS Enterprise"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 120 }
      name           = "USS Saratoga"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 169 }
      name           = "USS Wisconsin"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 172 }
      name           = "USS West Virginia"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 208 }
      name           = "USS Nevada"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 45 }
      name           = "USS New Mexico"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 219 }
      name           = "USS New York"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 218 }
      name           = "USS Arkansas"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 336 }
      name           = "USS Amsterdam"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 337 }
      name           = "USS Tucson"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 134 }
      name           = "USS Richmond"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 151 }
      name           = "37th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 152 }
      name           = "38th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 153 }
      name           = "39th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 15 }
    name     = "Occupation Fleet Transport Squadron"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 154 }
      name           = "40th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 155 }
      name           = "17th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 156 }
      name           = "18th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 157 }
      name           = "19th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 158 }
      name           = "20th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 159 }
      name           = "82nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 160 }
      name           = "83rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 161 }
      name           = "84th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 162 }
      name           = "85th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 163 }
      name           = "86th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 164 }
      name           = "87th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 165 }
      name           = "88th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 166 }
      name           = "89th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 16 }
    name     = "San Francisco Squadron"
    location = 1887
    base     = 1887
    division = {
      id             = { type = 30305 id = 168 }
      name           = "USS Missouri"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 171 }
      name           = "USS Mississippi"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 173 }
      name           = "USS Portland"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 178 }
      name           = "41st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 179 }
      name           = "60th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 180 }
      name           = "61st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 181 }
      name           = "62nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 182 }
      name           = "63rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 183 }
      name           = "64th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 184 }
      name           = "65th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 185 }
      name           = "66th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 186 }
      name           = "67th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 187 }
      name           = "68th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 188 }
      name           = "69th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 189 }
      name           = "70th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 190 }
      name           = "71st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 191 }
      name           = "20th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 192 }
      name           = "21st Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 193 }
      name           = "22nd Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 194 }
      name           = "23rd Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 195 }
      name           = "24th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 196 }
      name           = "25th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 197 }
      name           = "26th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 198 }
      name           = "27th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 199 }
      name           = "28th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 200 }
      name           = "29th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 201 }
      name           = "30th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 17 }
    name     = "1st West Coast Transport Squadron"
    location = 1887
    base     = 1887
    division = {
      id             = { type = 30305 id = 202 }
      name           = "21st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 203 }
      name           = "22nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 204 }
      name           = "90th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 205 }
      name           = "91st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 206 }
      name           = "92nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 207 }
      name           = "93rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 18 }
    name     = "Task Group 38.2"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 14 }
      name           = "USS Biloxi"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 17 }
      name           = "USS Santa Fe"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 341 }
    name     = "Task Group 38.5"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 12 }
      name           = "USS Wasp"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 4 }
      name           = "USS Baltimore"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 5 }
      name           = "USS Boston"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 342 }
    name     = "Boston Navy Yard"
    location = 1789
    base     = 1789
    division = {
      id             = { type = 30305 id = 82 }
      name           = "USS North Carolina"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 343 }
      name           = "USS Bremerton"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 6 }
      name           = "USS Canberra"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 344 }
      name           = "USS Helena"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 345 }
    name     = "Charleston Navy Yard"
    location = 1960
    base     = 1960
    division = {
      id             = { type = 30305 id = 28 }
      name           = "USS Reno"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      strength       = 90
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 346 }
    name     = "Task Force 31"
    location = 1661
    base     = 1661
    division = {
      id             = { type = 30305 id = 38 }
      name           = "10th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 39 }
      name           = "11th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 40 }
      name           = "12th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 347 }
    name     = "Task Group 30.1"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 146 }
      name           = "USS Hancock"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 320 }
      name           = "USS Midway"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 23 }
      name           = "USS Langley"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 25 }
      name           = "USS Birmingham"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 35 }
      name           = "USS Miami"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 15 }
      name           = "USS Mobile"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 29 }
      name           = "7th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 30 }
      name           = "8th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 348 }
    name     = "Task Group 30.3"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 177 }
      name           = "USS Vicksburg"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 31 }
      name           = "9th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 325 }
      name           = "57th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 349 }
    name     = "San Diego Squadron"
    location = 1886
    base     = 1886
    division = {
      id             = { type = 30305 id = 312 }
      name           = "USS Bon Homme Richard"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 11 }
      name           = "USS Bunker Hill"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 167 }
      name           = "USS Ranger"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 403 }
      name           = "USS San Jacinto"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 220 }
      name           = "USS Texas"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 0
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 350 }
      name           = "USS Columbus"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 351 }
      name           = "USS Los Angeles"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 175 }
      name           = "USS Astoria"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 37 }
      name           = "USS Vincennes"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 92 }
      name           = "USS Boise"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 352 }
    name     = "Mare Island"
    location = 1889
    base     = 1889
    division = {
      id             = { type = 30305 id = 78 }
      name           = "USS Alabama"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 79 }
      name           = "USS Indiana"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 83 }
      name           = "USS South Dakota"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 42 }
      name           = "USS Colorado"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 36 }
      name           = "USS San Diego"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 135 }
      name           = "USS Trenton"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 353 }
    name     = "Puget Sound Navy Yard"
    location = 1874
    base     = 1874
    division = {
      id             = { type = 30305 id = 149 }
      name           = "USS Massachusetts"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 44 }
      name           = "USS Maryland"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 315 }
      name           = "USS Pittsburgh"
      type           = heavy_cruiser
      model          = 7
      strength       = 80
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 355 }
    name     = "Norfolk Navy Yard"
    location = 1812
    base     = 1812
    division = {
      id             = { type = 30305 id = 319 }
      name           = "USS Lake Champlain"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 356 }
      name           = "USS Randolph"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 32 }
      name           = "USS Essex"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 43 }
      name           = "USS Idaho"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 0
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 358 }
      name           = "USS Fall River"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 221 }
      name           = "USS Augusta"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 357 }
      name           = "USS Portsmouth"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 48 }
      name           = "USS Honolulu"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 251 }
      name           = "USS Philadelphia"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 94 }
      name           = "USS Phoenix"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 252 }
      name           = "USS Savannah"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 359 }
    name     = "New York Yards"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 30305 id = 145 }
      name           = "USS Franklin"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 33 }
      name           = "USS Bataan"
      type           = escort_carrier
      model          = 4
      extra1         = none
      brigade_model1 = 1
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 84 }
      name           = "USS Washington"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 1
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 34 }
      name           = "USS Macon"
      type           = heavy_cruiser
      model          = 7
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 386 }
      name           = "USS Houston"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 24 }
      name           = "USS Little Rock"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 361 }
      name           = "USS Providence"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 248 }
      name           = "USS Brooklyn"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 249 }
      name           = "USS Cincinnati"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 132 }
      name           = "USS Concord"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 209 }
      name           = "USS Marblehead"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 250 }
      name           = "USS Omaha"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 210 }
      name           = "USS Raleigh"
      type           = light_cruiser
      model          = 7
      extra1         = none
      extra2         = none
      brigade_model1 = 0
      brigade_model2 = 0
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 225 }
      name           = "43rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 226 }
      name           = "44th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 227 }
      name           = "45th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 362 }
    name     = "Task Force 43"
    location = 2174
    base     = 2174
    division = {
      id             = { type = 30305 id = 18 }
      name           = "4th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 19 }
      name           = "5th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 20 }
      name           = "6th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 19 }
    name     = "2nd West Coast Transport Squadron"
    location = 1890
    base     = 1890
    division = {
      id             = { type = 30305 id = 211 }
      name           = "42nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 212 }
      name           = "23rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 213 }
      name           = "24th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 214 }
      name           = "94th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 215 }
      name           = "95th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 216 }
      name           = "96th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 217 }
      name           = "97th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 20 }
    name     = "Germany Occupation Squadron"
    location = 148
    base     = 148
    division = {
      id             = { type = 30305 id = 224 }
      name           = "USS Memphis"
      type           = light_cruiser
      model          = 7
      extra1         = naval_fire_controll_s
      extra2         = naval_radar_s
      brigade_model1 = 1
      brigade_model2 = 2
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 21 }
    name     = "US Channel Transport Squadron"
    location = 148
    base     = 148
    division = {
      id             = { type = 30305 id = 228 }
      name           = "46th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 229 }
      name           = "47th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 230 }
      name           = "25th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 231 }
      name           = "26th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 232 }
      name           = "27th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 233 }
      name           = "28th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 234 }
      name           = "29th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 235 }
      name           = "30th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 236 }
      name           = "98th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 237 }
      name           = "99th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 238 }
      name           = "100th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 239 }
      name           = "101st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 240 }
      name           = "102nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 241 }
      name           = "103rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 242 }
      name           = "104th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 243 }
      name           = "105th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 244 }
      name           = "106th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 245 }
      name           = "107th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 246 }
      name           = "108th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 247 }
      name           = "109th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 22 }
    name     = "US Mediterranean Squadron"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 253 }
      name           = "48th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 254 }
      name           = "49th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 255 }
      name           = "50th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 256 }
      name           = "51st Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 23 }
    name     = "US Mediterranean Transport Squadron"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 257 }
      name           = "52nd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 258 }
      name           = "31st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 259 }
      name           = "32nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 260 }
      name           = "33rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 261 }
      name           = "34th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 262 }
      name           = "35th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 263 }
      name           = "36th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 264 }
      name           = "110th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 265 }
      name           = "111th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 266 }
      name           = "112th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 267 }
      name           = "113th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 268 }
      name           = "114th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 269 }
      name           = "115th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 270 }
      name           = "116th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 271 }
      name           = "117th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 272 }
      name           = "118th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 273 }
      name           = "119th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 274 }
      name           = "120th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 275 }
      name           = "121st Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 24 }
    name     = "1st East Coast Transport Squadron"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 30305 id = 276 }
      name           = "53rd Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 277 }
      name           = "37th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 278 }
      name           = "38th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 279 }
      name           = "122nd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 280 }
      name           = "123rd Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 281 }
      name           = "124th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 282 }
      name           = "125th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 25 }
    name     = "2nd East Coast Transport Squadron"
    location = 1795
    base     = 1795
    division = {
      id             = { type = 30305 id = 283 }
      name           = "54th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 284 }
      name           = "39th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 285 }
      name           = "40th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 286 }
      name           = "126th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 287 }
      name           = "127th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 288 }
      name           = "128th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 289 }
      name           = "129th Transport Division"
      type           = transport
      model          = 4
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 32 }
    name     = "7th Submarine Division"
    location = 1739
    base     = 1739
    division = {
      id             = { type = 30305 id = 296 }
      name           = "7th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 33 }
    name     = "8th Submarine Division"
    location = 1739
    base     = 1739
    division = {
      id             = { type = 30305 id = 297 }
      name           = "8th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 36 }
    name     = "11th Submarine Division"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 300 }
      name           = "11th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 37 }
    name     = "12th Submarine Division"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 301 }
      name           = "12th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 38 }
    name     = "13th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 302 }
      name           = "13th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 39 }
    name     = "14th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 303 }
      name           = "14th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 40 }
    name     = "15th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 304 }
      name           = "15th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 41 }
    name     = "16th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 305 }
      name           = "16th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 42 }
    name     = "17th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 306 }
      name           = "17th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 43 }
    name     = "18th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 307 }
      name           = "18th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 44 }
    name     = "19th Submarine Division"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30305 id = 308 }
      name           = "19th Submarine Division"
      type           = submarine
      model          = 8
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 45 }
    name     = "Task Group 60.1"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 147 }
      name           = "USS Intrepid"
      type           = carrier
      model          = 6
      extra1         = cag
      brigade_model1 = 6
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 354 }
      name           = "USS Oklahoma City"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 322 }
      name           = "USS Flint"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 16 }
      name           = "USS San Juan"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 316 }
      name           = "55th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_asw
      brigade_model1 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 317 }
      name           = "56th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }
  navalunit = {
    id       = { type = 30302 id = 46 }
    name     = "Task Group 60.2"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30305 id = 41 }
      name           = "USS California"
      type           = battleship
      model          = 13
      extra1         = none
      extra2         = naval_fire_controll_l
      extra3         = none
      extra4         = naval_anti_air_l
      extra5         = naval_radar_l
      brigade_model1 = 2
      brigade_model2 = 1
      brigade_model3 = 2
      brigade_model4 = 5
      brigade_model5 = 3
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 26 }
      name           = "USS Cleveland"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 150 }
      name           = "USS Denver"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 27 }
      name           = "USS Montpelier"
      type           = light_cruiser
      model          = 7
      extra1         = naval_anti_air_s
      extra2         = naval_radar_s
      brigade_model1 = 5
      brigade_model2 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 49 }
      name           = "16th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_radar_s
      brigade_model1 = 2
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 50 }
      name           = "17th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
    division = {
      id             = { type = 30305 id = 51 }
      name           = "18th Destroyer Division"
      type           = destroyer
      model          = 8
      extra1         = naval_anti_air_s
      brigade_model1 = 5
      experience     = 15
    }
  }

  airunit = { 
    id       = { type = 30303 id = 1 }
    name     = "8th Air Force Bombers/1"
    location = 179
    base     = 179
    division = {
      id             = { type = 30306 id = 1 }
      name           = "25th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 2 }
      name           = "91st USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 3 }
      name           = "94th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 11 }
      name           = "457th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 2 }
    name     = "8th Air Force Fighters/1"
    location = 137
    base     = 137
    division = {
      id             = { type = 30306 id = 15 }
      name           = "1st USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 16 }
      name           = "4th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 17 }
      name           = "56th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 18 }
      name           = "352nd USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 3 }
    name     = "9th Air Force"
    location = 179
    base     = 179
    division = {
      id             = { type = 30306 id = 23 }
      name           = "97th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 24 }
      name           = "98th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 25 }
      name           = "99th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 30 }
      name           = "303rd USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 4 }
    name     = "15th Air Force"
    location = 134
    base     = 134
    division = {
      id             = { type = 30306 id = 31 }
      name           = "5th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 32 }
      name           = "47th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 33 }
      name           = "49th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 34 }
      name           = "55th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 5 }
    name     = "12th Air Force"
    location = 179
    base     = 179
    division = {
      id             = { type = 30306 id = 38 }
      name           = "17th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 39 }
      name           = "310th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 40 }
      name           = "57th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 41 }
      name           = "324th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 6 }
    name     = "9th Air Force/Air Transports"
    location = 134
    base     = 134
    division = {
      id             = { type = 30306 id = 42 }
      name           = "50th USAAF Troop Carrier Wing"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 43 }
      name           = "52nd USAAF Troop Carrier Wing"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 44 }
      name           = "53rd USAAF Troop Carrier Wing"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 47 }
      name           = "403rd USAAF Troop Carrier Wing"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 7 }
    name     = "13th Air Force (Heavy)"
    location = 134
    base     = 134
    division = {
      id             = { type = 30306 id = 45 }
      name           = "5th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 46 }
      name           = "42nd USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 8 }
    name     = "13th Air Force interceptors"
    location = 1661
    base     = 1661
    division = {
      id             = { type = 30306 id = 48 }
      name           = "347th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 9 }
    name     = "USAAF CONUS Reserve 1"
    location = 1795
    base     = 1809
    division = {
      id             = { type = 30306 id = 49 }
      name           = "1st Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 50 }
      name           = "2nd Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 55 }
      name           = "7th Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 10 }
    name     = "10th Air Force"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 59 }
      name           = "7th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 60 }
      name           = "12th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 64 }
      name           = "341st USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 11 }
    name     = "11th Air Force"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 65 }
      name           = "9th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 66 }
      name           = "11th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 35 }
      name           = "304th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 12 }
    name     = "1/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 67 }
      name           = "35th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 68 }
      name           = "38th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 69 }
      name           = "345th USAAF Tactical Bomb. Wing"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 13 }
    name     = "2/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 70 }
      name           = "49th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 71 }
      name           = "43rd USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 72 }
      name           = "307th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 14 }
    name     = "3/SWPAF"
    location = 1683
    base     = 1683
    division = {
      id             = { type = 30306 id = 73 }
      name           = "VMFN 115"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 74 }
      name           = "VMSB 142"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 15 }
    name     = "4/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 75 }
      name           = "VMF 121/211"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 76 }
      name           = "VMF 313"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 77 }
      name           = "VMB 433/443"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 16 }
    name     = "5/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 78 }
      name           = "VMF 218/222"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 79 }
      name           = "VMSB 133/341"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 80 }
      name           = "VMSB 244/423"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 17 }
    name     = "6/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 81 }
      name           = "VMF 215/223"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 82 }
      name           = "VMF 221/315"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 83 }
      name           = "VMB 241/413"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 18 }
    name     = "2/CPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 84 }
      name           = "VMF 111/224"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 85 }
      name           = "VMSB 311/331"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 86 }
      name           = "VMSB 231/245"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 19 }
    name     = "1/CPAF"
    location = 1734
    base     = 1734
    division = {
      id             = { type = 30306 id = 87 }
      name           = "VMF 124/213"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 88 }
      name           = "VMSB"
      type           = cas
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 20 }
    name     = "3/CPAF"
    location = 1686
    base     = 1686
    division = {
      id             = { type = 30306 id = 89 }
      name           = "VFN 532/534"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 90 }
      name           = "VMF 225/321"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 91 }
      name           = "VMF 216/217"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 92 }
      name           = "VMTB 131/242"
      type           = naval_bomber
      model          = 6
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 21 }
    name     = "4/CPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 93 }
      name           = "VMF 114/122"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 94 }
      name           = "VMB 134/541"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 22 }
    name     = "7/SWPAF"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 95 }
      name           = "VMF 113/422"
      type           = interceptor
      model          = 13
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 96 }
      name           = "VMB 151/612"
      type           = tactical_bomber
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 23 }
    name     = "USAAF CONUS Reserve 2"
    location = 1795
    base     = 1809
    division = {
      id             = { type = 30306 id = 53 }
      name           = "5th Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 52 }
      name           = "4th Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 51 }
      name           = "3rd Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 54 }
      name           = "6th Res BG"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 24 }
    name     = "9th Air Force Fighters"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 26 }
      name           = "70th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 27 }
      name           = "71st USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 28 }
      name           = "84th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 29 }
      name           = "100th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 25 }
    name     = "15th Air Force Fighters"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 36 }
      name           = "305th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 37 }
      name           = "306th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 26 }
    name     = "Reserve Transports"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 57 }
      name           = "1st Res Transp"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 58 }
      name           = "2nd Res Transp"
      type           = transport_plane
      model          = 5
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 27 }
    name     = "10th Air Force Fighters"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 61 }
      name           = "33rd USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 62 }
      name           = "80th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 63 }
      name           = "311th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 28 }
    name     = "8th Air Force Fighters/2"
    location = 138
    base     = 138
    division = {
      id             = { type = 30306 id = 19 }
      name           = "355th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 20 }
      name           = "357th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 21 }
      name           = "356th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 22 }
      name           = "358th USAAF interceptor Wing"
      type           = multi_role
      model          = 10
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 29 }
    name     = "8th Air Force Bombers/2"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 13 }
      name           = "487th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 10 }
      name           = "445th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 5 }
      name           = "322nd USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 4 }
      name           = "303rd USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 30 }
    name     = "8th Air Force Bombers/3"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 8 }
      name           = "388th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 7 }
      name           = "385th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 12 }
      name           = "467th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 31 }
    name     = "8th Air Force Bombers/4"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 9 }
      name           = "392nd USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 6 }
      name           = "379th USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
    division = {
      id             = { type = 30306 id = 14 }
      name           = "491st USAAF Strategic Bomb. Wing"
      type           = strategic_bomber
      model          = 7
      extra          = escort
      brigade_model  = 4
      strength       = 100
      experience     = 15
    }
  }
  airunit = { 
    id       = { type = 30303 id = 32 }
    name     = "P-80 Squadron"
    location = 1809
    base     = 1809
    division = {
      id             = { type = 30306 id = 97 }
      name           = "P-80 Squadron"
      type           = multi_role
      model          = 10
      strength       = 4
      max_strength   = 45
    }
  }
}
