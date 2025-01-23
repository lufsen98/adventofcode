´´´mermaid
   flowchart LR
   %% Huvudhubbar
   Central[Central Rörelsehub]
   SmartHome[Smart Hem-hub]
   Security[Säkerhetshub]
   
   %% Rörelsesensor-anslutna System
   Central --> Detektion[Rörelsedetektering]
   Detektion --> Belysning[Belysningskontroll]
   Detektion --> Kamera[Kameraaktivering]
   Detektion --> Larm[Larmsystem]
   Detektion --> Spray[Säkerhetsspray]
   Detektion --> AutoDrone[Patrullerande Drönare]
   Detektion --> Underhallning[Underhållningsrespons]
   Underhallning --> Disco[Disko & Laser]
   Underhallning --> Robot[Hemrobot]
   Underhallning --> Fika[Fika & Dryck]
   
   %% Smarta Hem-system
   SmartHome --> Klimat[Klimatkontroll]
   SmartHome --> Persienner[Persiennstyrning]
   SmartHome --> Timer[Automatisering & Timer]
   SmartHome --> Integration[Systemintegration]
   SmartHome --> Tillganglighet[Tillgänglighetsfunktioner]
   SmartHome --> Vatten[Vattenläckagedetektion]
   SmartHome --> Husdjur[Husdjursidentifiering]
   Tillganglighet --> Blink[Dörrsignalbelysning]
   Tillganglighet --> Rost[Röstigenkänning]
   
   %% Säkerhetssystem
   Security --> Fort[Fortliknande Säkerhet]
   Security --> Escape[Escape Room]
   Security --> Vallgrav[Säkerhetsvallgrav]
   Security --> Fallor[Säkerhetsfällor]
   Security --> RFID[GPS & RFID-spårning]

   %% Styling
   classDef hub fill:#f9f,stroke:#333,stroke-width:2px
   class Central,SmartHome,Security hub
