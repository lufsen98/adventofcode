```mermaid
graph TD
    %% Network Layer
    WIFI[WiFi Nätverk]
    
    %% Main Control Units
    CU[Centralstyrenhet] --> |WiFi| WIFI
    WIFI --> |WiFi| MS[Rörelsesensor]
    WIFI --> |WiFi| EL[Elsäkerhetsstyrenhet]
    WIFI --> |WiFi| SH[Smart Hem-styrenhet]

    %% Security System Components
    MS --> SEC[Säkerhetskomponenter]
    SEC --> |WiFi| CAM[Säkerhetskamera]
    SEC --> |WiFi| VA[Röstassistent]
    SEC --> |WiFi| RFID[RFID-läsare]
    
    %% Motion Detection Flow
    MS --> |WiFi| AL[Larm]
    MS --> |WiFi| CAM
    RFID --> |WiFi| AL
    RFID --> |WiFi| MS
    
    %% Electrical Safety System
    EL --> |WiFi| TS[Temperatursensorer]
    EL --> |WiFi| ES[Elförbrukningssensorer]
    EL --> |WiFi| LS[Läckagedetektorer]
    
    TS --> |WiFi| JB[Jordfelsbrytare]
    ES --> |WiFi| EP[Elkonsumtion]
    LS --> |WiFi| EL[Elläckage]
    
    %% Smart Home Control
    SH --> |WiFi| DD[Enhetskontroll]
    DD --> |WiFi| AP[Apparater]
    DD --> |WiFi| TM[Timers]
    
    style CU fill:#000000,stroke:#333,color:#fff
    style MS fill:#000000,stroke:#333,color:#fff
    style EL fill:#000000,stroke:#333,color:#fff
    style SH fill:#000000,stroke:#333,color:#fff
    style WIFI fill:#000000,stroke:#333,color:#fff
