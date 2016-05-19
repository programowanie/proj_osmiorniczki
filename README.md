# Żółtaniecki Paweł 
## Symulator sejmu

Projekt ma symulowac jedną kadencję sejmu. Ma zawierac wejściowo poslow i ich dane (wspolczynniki prawa i lewa, erudycja, poparcie (później również zależne od partii)).

- **Poslowie** grupować się maja w **partie** (dla uproszczenia 2) 
- W danej kadencji 1 partia rzadzi.
- Kadencja trwa 4 lata(;liczone w miesiącach 40)
- Poparcie poslow zależy od poparcia partii. Partia wygrywa zaleznie od poparcia i nastroju społecznego symulowanego poprzez lewo i prawo (jak i również skuteczności rządu?).
- posłowie podejmują decyzje zgodnie z współczynnikiem partii który jest narzucany przez nia dla każdego posla, ale liczony jest srednia pogladow poslow.(jakiś wpływ elektoratu?)
- Przy danym poziomie niezadowolenia symulacja konczy się spaleniem sejmu.
- Klasa nastrojów społecznych (singleton).
