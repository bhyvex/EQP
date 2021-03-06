
#ifndef _EQP_OPCODES_UNDERFOOT_HPP_
#define _EQP_OPCODES_UNDERFOOT_HPP_

#include "define.hpp"
#include "opcodes_canonical.hpp"
#include "opcode_translate.hpp"

namespace Underfoot
{
    enum Op : uint16_t
    {
        SendLoginInfo = 0x13da,
        ApproveWorld = 0x86c7,
        LogServer = 0x6f79,
        SendCharInfo = 0x4200,
        ExpansionInfo = 0x7e4d,
        GuildsList = 0x5b0b,
        EnterWorld = 0x51b9,
        PostEnterWorld = 0x5d32,
        SendSpellChecksum = 0x46d3,
        SendSkillCapsChecksum = 0x040b,
        DeleteCharacter = 0x5ca5,
        CharacterCreateRequest = 0x53a3,
        CharacterCreate = 0x1b85,
        RandomNameGenerator = 0x647a,
        ApproveName = 0x4f1f,
        MOTD = 0x7629,
        SetChatServer = 0x7d90,
        SetChatServer2 = 0x158f,
        ZoneServerInfo = 0x1190,
        WorldComplete = 0x441c,
        WorldUnknown001 = 0x6f9d,
        FloatListThing = 0x61ba,
        ZoneUnavail = 0x3288,
        WorldClientReady = 0x7d05,
        AckPacket = 0x3594,
        ZoneEntry = 0x4b61,
        ReqNewZone = 0x4118,
        NewZone = 0x43ac,
        ZoneSpawns = 0x7114,
        PlayerProfile = 0x6022,
        TimeOfDay = 0x6015,
        LevelUpdate = 0x6a99,
        Stamina = 0x3d86,
        RequestClientZoneChange = 0x18ea,
        ZoneChange = 0x6d37,
        SpawnAppearance = 0x3e17,
        ChangeSize = 0x6942,
        TributeUpdate = 0x684c,
        TributeTimer = 0x4895,
        TaskDescription = 0x156c,
        TaskActivity = 0x31f3,
        CompletedTasks = 0x687f,
        Weather = 0x4658,
        SendAATable = 0x6ef9,
        ClearAA = 0x2cd4,
        ClearLeadershipAbilities = 0x7b77,
        UpdateAA = 0x7bf6,
        RespondAA = 0x1fbd,
        ReqClientSpawn = 0x69cd,
        SpawnDoor = 0x6f2b,
        GroundSpawn = 0x5c85,
        SendZonepoints = 0x2370,
        SendAAStats = 0x78b9,
        WorldObjectsSent = 0x7b73,
        BlockedBuffs = 0x05d5,
        RemoveBlockedBuffs = 0x37c1,
        ClearBlockedBuffs = 0x5570,
        SendExpZonein = 0x47e7,
        SendTributes = 0x6bfb,
        TributeInfo = 0x5a67,
        SendGuildTributes = 0x4df0,
        AAExpUpdate = 0x4aa2,
        ExpUpdate = 0x0555,
        HPUpdate = 0x6145,
        ManaChange = 0x569a,
        TGB = 0x42ef,
        SpecialMesg = 0x016c,
        GuildMemberList = 0x51bc,
        GuildMOTD = 0x5658,
        CharInventory = 0x47ae,
        WearChange = 0x0400,
        ClientUpdate = 0x7062,
        ClientReady = 0x6cdc,
        SetServerFilter = 0x2d74,
        GetGuildMOTD = 0x1899,
        GetGuildMOTDReply = 0x4a5c,
        GuildMemberUpdate = 0x0a53,
        GuildInvite = 0x1a58,
        GuildRemove = 0x3c02,
        GuildPeace = 0x2bff,
        SetGuildMOTD = 0x053a,
        GuildList = 0x5b0b,
        GuildWar = 0x5408,
        GuildLeader = 0x0598,
        GuildDelete = 0x3f55,
        GuildInviteAccept = 0x7b64,
        GuildDemote = 0x457d,
        GuildPublicNote = 0x2dbd,
        GuildManageBanker = 0x1e4c,
        GuildBank = 0x0d8a,
        SetGuildRank = 0x4ffe,
        GuildUpdateURLAndChannel = 0x5232,
        GuildStatus = 0x28c8,
        GuildCreate = 0x192d,
        LFGuild = 0x7e23,
        GMServers = 0x6989,
        GMBecomeNPC = 0x56e7,
        GMZoneRequest = 0x3fd2,
        GMZoneRequest2 = 0x538f,
        GMGoto = 0x5ebc,
        GMSearchCorpse = 0x5a81,
        GMHideMe = 0x28ef,
        GMDelCorpse = 0x655c,
        GMApproval = 0x7312,
        GMToggle = 0x097f,
        GMSummon = 0x712b,
        GMEmoteZone = 0x1ac1,
        GMEmoteWorld = 0x2444,
        GMFind = 0x6e27,
        GMKick = 0x0402,
        GMKill = 0x799c,
        GMNameChange = 0x0f48,
        GMLastName = 0x7bfb,
        InspectAnswer = 0x0c2b,
        BeginCast = 0x0d5a,
        ColoredText = 0x71bf,
        ConsentResponse = 0x0e87,
        MemorizeSpell = 0x3887,
        SwapSpell = 0x5805,
        CastSpell = 0x50c2,
        Consider = 0x3c2d,
        FormattedMessage = 0x3b52,
        SimpleMessage = 0x1f4d,
        Buff = 0x0d1d,
        Illusion = 0x231f,
        MoneyOnCorpse = 0x4a83,
        RandomReply = 0x6d5d,
        DenyResponse = 0x6129,
        SkillUpdate = 0x7f01,
        GMTrainSkillConfirm = 0x3190,
        RandomReq = 0x139d,
        Death = 0x7f9e,
        GMTraining = 0x51fa,
        GMEndTraining = 0x5479,
        GMTrainSkill = 0x2257,
        Animation = 0x4a61,
        Begging = 0x53f9,
        Consent = 0x6bb9,
        ConsentDeny = 0x4cd1,
        AutoFire = 0x5db5,
        PetCommands = 0x7706,
        PetHoTT = 0x2528,
        DeleteSpell = 0x0698,
        Surname = 0x44ae,
        ClearSurname = 0x6705,
        FaceChange = 0x37a7,
        SenseHeading = 0x1b8a,
        Action = 0x0f14,
        ConsiderCorpse = 0x0a18,
        HideCorpse = 0x2d08,
        CorpseDrag = 0x3331,
        CorpseDrop = 0x2e70,
        Bug = 0x2369,
        Feedback = 0x7705,
        Report = 0x50d0,
        Damage = 0x631a,
        ChannelMessage = 0x2e79,
        Assist = 0x35b1,
        AssistGroup = 0x194f,
        MoveCoin = 0x6024,
        ZonePlayerToBind = 0x382c,
        KeyRing = 0x5c06,
        WhoAllRequest = 0x177a,
        WhoAllResponse = 0x6ffa,
        FriendsWho = 0x6275,
        ConfirmDelete = 0x3edc,
        Logout = 0x224f,
        Rewind = 0x7d63,
        TargetCommand = 0x756c,
        InspectRequest = 0x7c94,
        Hide = 0x3497,
        Jump = 0x083b,
        Camp = 0x5f85,
        Emote = 0x3164,
        SetRunMode = 0x3d06,
        BankerChange = 0x300a,
        TargetMouse = 0x5f5e,
        MobHealth = 0x15de,
        InitialMobHealth = 0x5cb0,
        TargetHoTT = 0x790c,
        XTargetResponse = 0x6eb5,
        XTargetRequest = 0x4750,
        XTargetAutoAddHaters = 0x1a28,
        TargetBuffs = 0x3f24,
        BuffCreate = 0x2121,
        BuffRemoveRequest = 0x4065,
        DeleteSpawn = 0x58c5,
        AutoAttack = 0x1df9,
        AutoAttack2 = 0x517b,
        Consume = 0x24c5,
        MoveItem = 0x2641,
        DeleteItem = 0x66e0,
        DeleteCharge = 0x4ca1,
        ItemPacket = 0x7b6e,
        ItemLinkResponse = 0x695c,
        ItemLinkClick = 0x3c66,
        NewSpawn = 0x429b,
        Track = 0x709d,
        TrackTarget = 0x3f49,
        TrackUnknown = 0x03e7,
        ClickDoor = 0x6e97,
        MoveDoor = 0x3154,
        RemoveAllDoors = 0x6215,
        EnvDamage = 0x2730,
        BoardBoat = 0x7554,
        Forage = 0x739b,
        LeaveBoat = 0x7286,
        ControlBoat = 0x7ea8,
        SafeFallSuccess = 0x6df7,
        RezzComplete = 0x30a4,
        RezzRequest = 0x32af,
        RezzAnswer = 0x2d41,
        Shielding = 0x4675,
        RequestDuel = 0x6cfe,
        MobRename = 0x0507,
        AugmentItem = 0x7c87,
        WeaponEquip1 = 0x4572,
        PlayerStateAdd = 0x399b,
        PlayerStateRemove = 0x416b,
        ApplyPoison = 0x5cd3,
        Save = 0x6618,
        TestBuff = 0x3415,
        CustomTitles = 0x6a7e,
        Split = 0x1418,
        YellForHelp = 0x55a8,
        LoadSpellSet = 0x6617,
        Bandolier = 0x510c,
        PotionBelt = 0x0651,
        DuelResponse = 0x41a6,
        DuelResponse2 = 0x6d60,
        SaveOnZoneReq = 0x2913,
        ReadBook = 0x465e,
        Dye = 0x2137,
        InterruptCast = 0x7566,
        AAAction = 0x2bad,
        LeadershipExpToggle = 0x5033,
        LeadershipExpUpdate = 0x074f,
        PurchaseLeadershipAA = 0x5f55,
        UpdateLeadershipAA = 0x77ed,
        MarkNPC = 0x66bf,
        MarkRaidNPC = 0x3ec7,
        ClearNPCMarks = 0x5c29,
        ClearRaidNPCMarks = 0x2af4,
        DoGroupLeadershipAbility = 0x0068,
        GroupLeadershipAAUpdate = 0x167b,
        DelegateAbility = 0x6e58,
        SetGroupTarget = 0x6b9e,
        Charm = 0x1fd5,
        Stun = 0x3d00,
        SendFindableNPCs = 0x6193,
        FindPersonRequest = 0x1e04,
        FindPersonReply = 0x7cae,
        Sound = 0x737a,
        PetBuffWindow = 0x7b87,
        LevelAppearance = 0x1bd4,
        Translocate = 0x3d9c,
        Sacrifice = 0x301b,
        PopupResponse = 0x6d27,
        OnLevelMessage = 0x24cb,
        AugmentInfo = 0x31b1,
        Petition = 0x31d1,
        SomeItemPacketMaybe = 0x2c27,
        PVPStats = 0x5272,
        PVPLeaderBoardRequest = 0x4973,
        PVPLeaderBoardReply = 0x3842,
        PVPLeaderBoardDetailsRequest = 0x6c75,
        PVPLeaderBoardDetailsReply = 0x7fd7,
        RestState = 0x5d24,
        RespawnWindow = 0x107f,
        DisciplineTimer = 0x047c,
        LDoNButton = 0x1031,
        SetStartCity = 0x68f0,
        VoiceMacroIn = 0x1524,
        VoiceMacroOut = 0x1d99,
        ItemViewUnknown = 0x4eb3,
        VetRewardsAvaliable = 0x0baa,
        VetClaimRequest = 0x34f8,
        VetClaimReply = 0x6a5d,
        CrystalCountUpdate = 0x3fc8,
        DisciplineUpdate = 0x6ed3,
        MobUpdate = 0x4656,
        NPCMoveUpdate = 0x0f3e,
        CameraEffect = 0x6b0e,
        SpellEffect = 0x57a3,
        RemoveNimbusEffect = 0x2c77,
        AltCurrency = 0x659e,
        AltCurrencyMerchantRequest = 0x214c,
        AltCurrencyMerchantReply = 0x4348,
        AltCurrencyPurchase = 0x4ad7,
        AltCurrencySell = 0x14cf,
        AltCurrencySellSelection = 0x322a,
        AltCurrencyReclaim = 0x365d,
        CrystalReclaim = 0x726e,
        CrystalCreate = 0x12f3,
        Untargetable = 0x301d,
        IncreaseStats = 0x4acf,
        Weblink = 0x6840,
        InspectMessageUpdate = 0x7fa1,
        OpenContainer = 0x041a,
        Marquee = 0x3675,
        DzQuit = 0x1539,
        DzListTimers = 0x21e9,
        DzAddPlayer = 0x3657,
        DzRemovePlayer = 0x054e,
        DzSwapPlayer = 0x4661,
        DzMakeLeader = 0x226f,
        DzPlayerList = 0x74e4,
        DzJoinExpeditionConfirm = 0x3c5e,
        DzJoinExpeditionReply = 0x1154,
        DzExpeditionInfo = 0x1150,
        DzMemberStatus = 0x2d17,
        DzLeaderStatus = 0x2caf,
        DzExpeditionEndsWarning = 0x6ac2,
        DzExpeditionList = 0x70d8,
        DzMemberList = 0x15c4,
        DzCompass = 0x01cb,
        DzChooseZone = 0x65e1,
        ShroudSelectionWindow = 0x72ad,
        ShroudRequestStats = 0x488b,
        ShroudRespondStats = 0x1910,
        ShroudSelect = 0x45d7,
        ShroudSelectCancel = 0x666d,
        ShroudProgress = 0x6016,
        ShroudProgress2 = 0x66b4,
        Shroud = 0x1643,
        SpawnPositionUpdate = 0x4656,
        ManaUpdate = 0x0433,
        EnduranceUpdate = 0x6b76,
        MobManaUpdate = 0x7901,
        MobEnduranceUpdate = 0x1912,
        LootRequest = 0x6ad7,
        EndLootRequest = 0x6546,
        LootItem = 0x5960,
        LootComplete = 0x604d,
        BazaarSearch = 0x550f,
        TraderDelItem = 0x63c8,
        BecomeTrader = 0x0a1d,
        TraderShop = 0x2881,
        Trader = 0x0c08,
        TraderBuy = 0x3672,
        Barter = 0x6db5,
        TradeRequest = 0x7113,
        TradeAcceptClick = 0x064a,
        TradeRequestAck = 0x606a,
        TradeCoins = 0x0149,
        FinishTrade = 0x3ff6,
        CancelTrade = 0x527e,
        TradeMoneyUpdate = 0x2a6d,
        MoneyUpdate = 0xd677,
        TradeBusy = 0x5ed3,
        FinishWindow = 0x3c27,
        FinishWindow2 = 0x6759,
        ItemVerifyRequest = 0x101e,
        ItemVerifyReply = 0x21c7,
        ShopPlayerSell = 0x0b27,
        ShopRequest = 0x442a,
        ShopEnd = 0x3753,
        ShopEndConfirm = 0x4578,
        ShopPlayerBuy = 0x436a,
        ShopDelItem = 0x63c8,
        ClickObject = 0x33e5,
        ClickObjectAction = 0x41b5,
        ClearObject = 0x71d1,
        RecipeDetails = 0x58d9,
        RecipesFavorite = 0x7770,
        RecipesSearch = 0x6948,
        RecipeReply = 0x521c,
        RecipeAutoCombine = 0x0322,
        TradeSkillCombine = 0x4212,
        OpenGuildTributeMaster = 0x5e79,
        OpenTributeMaster = 0x7c24,
        SelectTribute = 0x0c98,
        TributeItem = 0x0b89,
        TributeMoney = 0x314f,
        TributeToggle = 0x6dc3,
        TributePointUpdate = 0x15a7,
        LeaveAdventure = 0x3ed4,
        AdventureFinish = 0x6acc,
        AdventureInfoRequest = 0x3541,
        AdventureInfo = 0x5cea,
        AdventureRequest = 0x2c03,
        AdventureDetails = 0x1d40,
        AdventureData = 0x34f2,
        AdventureUpdate = 0x771f,
        AdventureMerchantRequest = 0x4e22,
        AdventureMerchantResponse = 0x4dd5,
        AdventureMerchantPurchase = 0x7b7f,
        AdventureMerchantSell = 0x179d,
        AdventurePointsUpdate = 0x7537,
        AdventureStatsRequest = 0x4786,
        AdventureStatsReply = 0x38b0,
        AdventureLeaderboardRequest = 0x4cc6,
        AdventureLeaderboardReply = 0x4423,
        GroupDisband = 0x54e8,
        GroupInvite = 0x4f60,
        GroupFollow = 0x7f2b,
        GroupUpdate = 0x5331,
        GroupUpdateB = 0x0786,
        GroupCancelInvite = 0x2736,
        GroupAcknowledge = 0x3e22,
        GroupDelete = 0x58e6,
        CancelInvite = 0x2736,
        GroupFollow2 = 0x6c16,
        GroupInvite2 = 0x5251,
        GroupDisbandYou = 0x0bd0,
        GroupDisbandOther = 0x49f6,
        GroupLeaderChange = 0x0c33,
        GroupRoles = 0x116d,
        GroupMakeLeader = 0x5851,
        GroupMentor = 0x292f,
        InspectBuffs = 0x105b,
        LFGCommand = 0x2c38,
        LFGGetMatchesRequest = 0x28d4,
        LFGGetMatchesResponse = 0x7a16,
        LFPGetMatchesRequest = 0x189e,
        LFPGetMatchesResponse = 0x589f,
        LFPCommand = 0x7429,
        RaidInvite = 0x60b5,
        RaidUpdate = 0x4d8b,
        Taunt = 0x30e2,
        CombatAbility = 0x36f8,
        SenseTraps = 0x7e45,
        PickPocket = 0x5821,
        Disarm = 0x6def,
        Sneak = 0x1d22,
        Fishing = 0x7093,
        InstillDoubt = 0x221a,
        FeignDeath = 0x002b,
        Mend = 0x10a6,
        LDoNOpen = 0x032b,
        TaskActivityComplete = 0x5832,
        TaskMemberList = 0x66ba,
        OpenNewTasksWindow = 0x98f6,
        AvaliableTask = 0x6255,
        AcceptNewTask = 0x17d5,
        TaskHistoryRequest = 0x547c,
        TaskHistoryReply = 0x4524,
        CancelTask = 0x3bf5,
        NewTitlesAvailable = 0x4b49,
        RequestTitles = 0x4d3e,
        SendTitleList = 0x0d96,
        SetTitle = 0x675c,
        SetTitleReply = 0x75f5,
        MercenaryDataRequest = 0x3015,
        MercenaryDataResponse = 0x0eaa,
        MercenaryHire = 0x099e,
        MercenaryTimer = 0x0cae,
        MercenaryAssign = 0x2538,
        MercenaryUnknown1 = 0x367f,
        MercenaryDataUpdate = 0x57f2,
        MercenaryCommand = 0x50c1,
        MercenarySuspendRequest = 0x3c58,
        MercenarySuspendResponse = 0x4b82,
        MercenaryUnsuspendResponse = 0x5fe3,
        MercenaryDataUpdateRequest = 0x05f1,
        MercenaryDismiss = 0x319a,
        MercenaryTimerRequest = 0x184e,
        PlayMP3 = 0x7f72,
        ItemRecastDelay = 0x82d7,
        ShieldGroup = 0x23a1,
        COUNT
    };

    static const OpCodeTranslation toCanonical[] = {
        { 0x13da, CanonicalOp::SendLoginInfo },
        { 0x86c7, CanonicalOp::ApproveWorld },
        { 0x6f79, CanonicalOp::LogServer },
        { 0x4200, CanonicalOp::SendCharInfo },
        { 0x7e4d, CanonicalOp::ExpansionInfo },
        { 0x5b0b, CanonicalOp::GuildsList },
        { 0x51b9, CanonicalOp::EnterWorld },
        { 0x5d32, CanonicalOp::PostEnterWorld },
        { 0x46d3, CanonicalOp::SendSpellChecksum },
        { 0x040b, CanonicalOp::SendSkillCapsChecksum },
        { 0x5ca5, CanonicalOp::DeleteCharacter },
        { 0x53a3, CanonicalOp::CharacterCreateRequest },
        { 0x1b85, CanonicalOp::CharacterCreate },
        { 0x647a, CanonicalOp::RandomNameGenerator },
        { 0x4f1f, CanonicalOp::ApproveName },
        { 0x7629, CanonicalOp::MOTD },
        { 0x7d90, CanonicalOp::SetChatServer },
        { 0x158f, CanonicalOp::SetChatServer2 },
        { 0x1190, CanonicalOp::ZoneServerInfo },
        { 0x441c, CanonicalOp::WorldComplete },
        { 0x6f9d, CanonicalOp::WorldUnknown001 },
        { 0x61ba, CanonicalOp::FloatListThing },
        { 0x3288, CanonicalOp::ZoneUnavail },
        { 0x7d05, CanonicalOp::WorldClientReady },
        { 0x3594, CanonicalOp::AckPacket },
        { 0x4b61, CanonicalOp::ZoneEntry },
        { 0x4118, CanonicalOp::ReqNewZone },
        { 0x43ac, CanonicalOp::NewZone },
        { 0x7114, CanonicalOp::ZoneSpawns },
        { 0x6022, CanonicalOp::PlayerProfile },
        { 0x6015, CanonicalOp::TimeOfDay },
        { 0x6a99, CanonicalOp::LevelUpdate },
        { 0x3d86, CanonicalOp::Stamina },
        { 0x18ea, CanonicalOp::RequestClientZoneChange },
        { 0x6d37, CanonicalOp::ZoneChange },
        { 0x3e17, CanonicalOp::SpawnAppearance },
        { 0x6942, CanonicalOp::ChangeSize },
        { 0x684c, CanonicalOp::TributeUpdate },
        { 0x4895, CanonicalOp::TributeTimer },
        { 0x156c, CanonicalOp::TaskDescription },
        { 0x31f3, CanonicalOp::TaskActivity },
        { 0x687f, CanonicalOp::CompletedTasks },
        { 0x4658, CanonicalOp::Weather },
        { 0x6ef9, CanonicalOp::SendAATable },
        { 0x2cd4, CanonicalOp::ClearAA },
        { 0x7b77, CanonicalOp::ClearLeadershipAbilities },
        { 0x7bf6, CanonicalOp::UpdateAA },
        { 0x1fbd, CanonicalOp::RespondAA },
        { 0x69cd, CanonicalOp::ReqClientSpawn },
        { 0x6f2b, CanonicalOp::SpawnDoor },
        { 0x5c85, CanonicalOp::GroundSpawn },
        { 0x2370, CanonicalOp::SendZonepoints },
        { 0x78b9, CanonicalOp::SendAAStats },
        { 0x7b73, CanonicalOp::WorldObjectsSent },
        { 0x05d5, CanonicalOp::BlockedBuffs },
        { 0x37c1, CanonicalOp::RemoveBlockedBuffs },
        { 0x5570, CanonicalOp::ClearBlockedBuffs },
        { 0x47e7, CanonicalOp::SendExpZonein },
        { 0x6bfb, CanonicalOp::SendTributes },
        { 0x5a67, CanonicalOp::TributeInfo },
        { 0x4df0, CanonicalOp::SendGuildTributes },
        { 0x4aa2, CanonicalOp::AAExpUpdate },
        { 0x0555, CanonicalOp::ExpUpdate },
        { 0x6145, CanonicalOp::HPUpdate },
        { 0x569a, CanonicalOp::ManaChange },
        { 0x42ef, CanonicalOp::TGB },
        { 0x016c, CanonicalOp::SpecialMesg },
        { 0x51bc, CanonicalOp::GuildMemberList },
        { 0x5658, CanonicalOp::GuildMOTD },
        { 0x47ae, CanonicalOp::CharInventory },
        { 0x0400, CanonicalOp::WearChange },
        { 0x7062, CanonicalOp::ClientUpdate },
        { 0x6cdc, CanonicalOp::ClientReady },
        { 0x2d74, CanonicalOp::SetServerFilter },
        { 0x1899, CanonicalOp::GetGuildMOTD },
        { 0x4a5c, CanonicalOp::GetGuildMOTDReply },
        { 0x0a53, CanonicalOp::GuildMemberUpdate },
        { 0x1a58, CanonicalOp::GuildInvite },
        { 0x3c02, CanonicalOp::GuildRemove },
        { 0x2bff, CanonicalOp::GuildPeace },
        { 0x053a, CanonicalOp::SetGuildMOTD },
        { 0x5b0b, CanonicalOp::GuildList },
        { 0x5408, CanonicalOp::GuildWar },
        { 0x0598, CanonicalOp::GuildLeader },
        { 0x3f55, CanonicalOp::GuildDelete },
        { 0x7b64, CanonicalOp::GuildInviteAccept },
        { 0x457d, CanonicalOp::GuildDemote },
        { 0x2dbd, CanonicalOp::GuildPublicNote },
        { 0x1e4c, CanonicalOp::GuildManageBanker },
        { 0x0d8a, CanonicalOp::GuildBank },
        { 0x4ffe, CanonicalOp::SetGuildRank },
        { 0x5232, CanonicalOp::GuildUpdateURLAndChannel },
        { 0x28c8, CanonicalOp::GuildStatus },
        { 0x192d, CanonicalOp::GuildCreate },
        { 0x7e23, CanonicalOp::LFGuild },
        { 0x6989, CanonicalOp::GMServers },
        { 0x56e7, CanonicalOp::GMBecomeNPC },
        { 0x3fd2, CanonicalOp::GMZoneRequest },
        { 0x538f, CanonicalOp::GMZoneRequest2 },
        { 0x5ebc, CanonicalOp::GMGoto },
        { 0x5a81, CanonicalOp::GMSearchCorpse },
        { 0x28ef, CanonicalOp::GMHideMe },
        { 0x655c, CanonicalOp::GMDelCorpse },
        { 0x7312, CanonicalOp::GMApproval },
        { 0x097f, CanonicalOp::GMToggle },
        { 0x712b, CanonicalOp::GMSummon },
        { 0x1ac1, CanonicalOp::GMEmoteZone },
        { 0x2444, CanonicalOp::GMEmoteWorld },
        { 0x6e27, CanonicalOp::GMFind },
        { 0x0402, CanonicalOp::GMKick },
        { 0x799c, CanonicalOp::GMKill },
        { 0x0f48, CanonicalOp::GMNameChange },
        { 0x7bfb, CanonicalOp::GMLastName },
        { 0x0c2b, CanonicalOp::InspectAnswer },
        { 0x0d5a, CanonicalOp::BeginCast },
        { 0x71bf, CanonicalOp::ColoredText },
        { 0x0e87, CanonicalOp::ConsentResponse },
        { 0x3887, CanonicalOp::MemorizeSpell },
        { 0x5805, CanonicalOp::SwapSpell },
        { 0x50c2, CanonicalOp::CastSpell },
        { 0x3c2d, CanonicalOp::Consider },
        { 0x3b52, CanonicalOp::FormattedMessage },
        { 0x1f4d, CanonicalOp::SimpleMessage },
        { 0x0d1d, CanonicalOp::Buff },
        { 0x231f, CanonicalOp::Illusion },
        { 0x4a83, CanonicalOp::MoneyOnCorpse },
        { 0x6d5d, CanonicalOp::RandomReply },
        { 0x6129, CanonicalOp::DenyResponse },
        { 0x7f01, CanonicalOp::SkillUpdate },
        { 0x3190, CanonicalOp::GMTrainSkillConfirm },
        { 0x139d, CanonicalOp::RandomReq },
        { 0x7f9e, CanonicalOp::Death },
        { 0x51fa, CanonicalOp::GMTraining },
        { 0x5479, CanonicalOp::GMEndTraining },
        { 0x2257, CanonicalOp::GMTrainSkill },
        { 0x4a61, CanonicalOp::Animation },
        { 0x53f9, CanonicalOp::Begging },
        { 0x6bb9, CanonicalOp::Consent },
        { 0x4cd1, CanonicalOp::ConsentDeny },
        { 0x5db5, CanonicalOp::AutoFire },
        { 0x7706, CanonicalOp::PetCommands },
        { 0x2528, CanonicalOp::PetHoTT },
        { 0x0698, CanonicalOp::DeleteSpell },
        { 0x44ae, CanonicalOp::Surname },
        { 0x6705, CanonicalOp::ClearSurname },
        { 0x37a7, CanonicalOp::FaceChange },
        { 0x1b8a, CanonicalOp::SenseHeading },
        { 0x0f14, CanonicalOp::Action },
        { 0x0a18, CanonicalOp::ConsiderCorpse },
        { 0x2d08, CanonicalOp::HideCorpse },
        { 0x3331, CanonicalOp::CorpseDrag },
        { 0x2e70, CanonicalOp::CorpseDrop },
        { 0x2369, CanonicalOp::Bug },
        { 0x7705, CanonicalOp::Feedback },
        { 0x50d0, CanonicalOp::Report },
        { 0x631a, CanonicalOp::Damage },
        { 0x2e79, CanonicalOp::ChannelMessage },
        { 0x35b1, CanonicalOp::Assist },
        { 0x194f, CanonicalOp::AssistGroup },
        { 0x6024, CanonicalOp::MoveCoin },
        { 0x382c, CanonicalOp::ZonePlayerToBind },
        { 0x5c06, CanonicalOp::KeyRing },
        { 0x177a, CanonicalOp::WhoAllRequest },
        { 0x6ffa, CanonicalOp::WhoAllResponse },
        { 0x6275, CanonicalOp::FriendsWho },
        { 0x3edc, CanonicalOp::ConfirmDelete },
        { 0x224f, CanonicalOp::Logout },
        { 0x7d63, CanonicalOp::Rewind },
        { 0x756c, CanonicalOp::TargetCommand },
        { 0x7c94, CanonicalOp::InspectRequest },
        { 0x3497, CanonicalOp::Hide },
        { 0x083b, CanonicalOp::Jump },
        { 0x5f85, CanonicalOp::Camp },
        { 0x3164, CanonicalOp::Emote },
        { 0x3d06, CanonicalOp::SetRunMode },
        { 0x300a, CanonicalOp::BankerChange },
        { 0x5f5e, CanonicalOp::TargetMouse },
        { 0x15de, CanonicalOp::MobHealth },
        { 0x5cb0, CanonicalOp::InitialMobHealth },
        { 0x790c, CanonicalOp::TargetHoTT },
        { 0x6eb5, CanonicalOp::XTargetResponse },
        { 0x4750, CanonicalOp::XTargetRequest },
        { 0x1a28, CanonicalOp::XTargetAutoAddHaters },
        { 0x3f24, CanonicalOp::TargetBuffs },
        { 0x2121, CanonicalOp::BuffCreate },
        { 0x4065, CanonicalOp::BuffRemoveRequest },
        { 0x58c5, CanonicalOp::DeleteSpawn },
        { 0x1df9, CanonicalOp::AutoAttack },
        { 0x517b, CanonicalOp::AutoAttack2 },
        { 0x24c5, CanonicalOp::Consume },
        { 0x2641, CanonicalOp::MoveItem },
        { 0x66e0, CanonicalOp::DeleteItem },
        { 0x4ca1, CanonicalOp::DeleteCharge },
        { 0x7b6e, CanonicalOp::ItemPacket },
        { 0x695c, CanonicalOp::ItemLinkResponse },
        { 0x3c66, CanonicalOp::ItemLinkClick },
        { 0x429b, CanonicalOp::NewSpawn },
        { 0x709d, CanonicalOp::Track },
        { 0x3f49, CanonicalOp::TrackTarget },
        { 0x03e7, CanonicalOp::TrackUnknown },
        { 0x6e97, CanonicalOp::ClickDoor },
        { 0x3154, CanonicalOp::MoveDoor },
        { 0x6215, CanonicalOp::RemoveAllDoors },
        { 0x2730, CanonicalOp::EnvDamage },
        { 0x7554, CanonicalOp::BoardBoat },
        { 0x739b, CanonicalOp::Forage },
        { 0x7286, CanonicalOp::LeaveBoat },
        { 0x7ea8, CanonicalOp::ControlBoat },
        { 0x6df7, CanonicalOp::SafeFallSuccess },
        { 0x30a4, CanonicalOp::RezzComplete },
        { 0x32af, CanonicalOp::RezzRequest },
        { 0x2d41, CanonicalOp::RezzAnswer },
        { 0x4675, CanonicalOp::Shielding },
        { 0x6cfe, CanonicalOp::RequestDuel },
        { 0x0507, CanonicalOp::MobRename },
        { 0x7c87, CanonicalOp::AugmentItem },
        { 0x4572, CanonicalOp::WeaponEquip1 },
        { 0x399b, CanonicalOp::PlayerStateAdd },
        { 0x416b, CanonicalOp::PlayerStateRemove },
        { 0x5cd3, CanonicalOp::ApplyPoison },
        { 0x6618, CanonicalOp::Save },
        { 0x3415, CanonicalOp::TestBuff },
        { 0x6a7e, CanonicalOp::CustomTitles },
        { 0x1418, CanonicalOp::Split },
        { 0x55a8, CanonicalOp::YellForHelp },
        { 0x6617, CanonicalOp::LoadSpellSet },
        { 0x510c, CanonicalOp::Bandolier },
        { 0x0651, CanonicalOp::PotionBelt },
        { 0x41a6, CanonicalOp::DuelResponse },
        { 0x6d60, CanonicalOp::DuelResponse2 },
        { 0x2913, CanonicalOp::SaveOnZoneReq },
        { 0x465e, CanonicalOp::ReadBook },
        { 0x2137, CanonicalOp::Dye },
        { 0x7566, CanonicalOp::InterruptCast },
        { 0x2bad, CanonicalOp::AAAction },
        { 0x5033, CanonicalOp::LeadershipExpToggle },
        { 0x074f, CanonicalOp::LeadershipExpUpdate },
        { 0x5f55, CanonicalOp::PurchaseLeadershipAA },
        { 0x77ed, CanonicalOp::UpdateLeadershipAA },
        { 0x66bf, CanonicalOp::MarkNPC },
        { 0x3ec7, CanonicalOp::MarkRaidNPC },
        { 0x5c29, CanonicalOp::ClearNPCMarks },
        { 0x2af4, CanonicalOp::ClearRaidNPCMarks },
        { 0x0068, CanonicalOp::DoGroupLeadershipAbility },
        { 0x167b, CanonicalOp::GroupLeadershipAAUpdate },
        { 0x6e58, CanonicalOp::DelegateAbility },
        { 0x6b9e, CanonicalOp::SetGroupTarget },
        { 0x1fd5, CanonicalOp::Charm },
        { 0x3d00, CanonicalOp::Stun },
        { 0x6193, CanonicalOp::SendFindableNPCs },
        { 0x1e04, CanonicalOp::FindPersonRequest },
        { 0x7cae, CanonicalOp::FindPersonReply },
        { 0x737a, CanonicalOp::Sound },
        { 0x7b87, CanonicalOp::PetBuffWindow },
        { 0x1bd4, CanonicalOp::LevelAppearance },
        { 0x3d9c, CanonicalOp::Translocate },
        { 0x301b, CanonicalOp::Sacrifice },
        { 0x6d27, CanonicalOp::PopupResponse },
        { 0x24cb, CanonicalOp::OnLevelMessage },
        { 0x31b1, CanonicalOp::AugmentInfo },
        { 0x31d1, CanonicalOp::Petition },
        { 0x2c27, CanonicalOp::SomeItemPacketMaybe },
        { 0x5272, CanonicalOp::PVPStats },
        { 0x4973, CanonicalOp::PVPLeaderBoardRequest },
        { 0x3842, CanonicalOp::PVPLeaderBoardReply },
        { 0x6c75, CanonicalOp::PVPLeaderBoardDetailsRequest },
        { 0x7fd7, CanonicalOp::PVPLeaderBoardDetailsReply },
        { 0x5d24, CanonicalOp::RestState },
        { 0x107f, CanonicalOp::RespawnWindow },
        { 0x047c, CanonicalOp::DisciplineTimer },
        { 0x1031, CanonicalOp::LDoNButton },
        { 0x68f0, CanonicalOp::SetStartCity },
        { 0x1524, CanonicalOp::VoiceMacroIn },
        { 0x1d99, CanonicalOp::VoiceMacroOut },
        { 0x4eb3, CanonicalOp::ItemViewUnknown },
        { 0x0baa, CanonicalOp::VetRewardsAvaliable },
        { 0x34f8, CanonicalOp::VetClaimRequest },
        { 0x6a5d, CanonicalOp::VetClaimReply },
        { 0x3fc8, CanonicalOp::CrystalCountUpdate },
        { 0x6ed3, CanonicalOp::DisciplineUpdate },
        { 0x4656, CanonicalOp::MobUpdate },
        { 0x0f3e, CanonicalOp::NPCMoveUpdate },
        { 0x6b0e, CanonicalOp::CameraEffect },
        { 0x57a3, CanonicalOp::SpellEffect },
        { 0x2c77, CanonicalOp::RemoveNimbusEffect },
        { 0x659e, CanonicalOp::AltCurrency },
        { 0x214c, CanonicalOp::AltCurrencyMerchantRequest },
        { 0x4348, CanonicalOp::AltCurrencyMerchantReply },
        { 0x4ad7, CanonicalOp::AltCurrencyPurchase },
        { 0x14cf, CanonicalOp::AltCurrencySell },
        { 0x322a, CanonicalOp::AltCurrencySellSelection },
        { 0x365d, CanonicalOp::AltCurrencyReclaim },
        { 0x726e, CanonicalOp::CrystalReclaim },
        { 0x12f3, CanonicalOp::CrystalCreate },
        { 0x301d, CanonicalOp::Untargetable },
        { 0x4acf, CanonicalOp::IncreaseStats },
        { 0x6840, CanonicalOp::Weblink },
        { 0x7fa1, CanonicalOp::InspectMessageUpdate },
        { 0x041a, CanonicalOp::OpenContainer },
        { 0x3675, CanonicalOp::Marquee },
        { 0x1539, CanonicalOp::DzQuit },
        { 0x21e9, CanonicalOp::DzListTimers },
        { 0x3657, CanonicalOp::DzAddPlayer },
        { 0x054e, CanonicalOp::DzRemovePlayer },
        { 0x4661, CanonicalOp::DzSwapPlayer },
        { 0x226f, CanonicalOp::DzMakeLeader },
        { 0x74e4, CanonicalOp::DzPlayerList },
        { 0x3c5e, CanonicalOp::DzJoinExpeditionConfirm },
        { 0x1154, CanonicalOp::DzJoinExpeditionReply },
        { 0x1150, CanonicalOp::DzExpeditionInfo },
        { 0x2d17, CanonicalOp::DzMemberStatus },
        { 0x2caf, CanonicalOp::DzLeaderStatus },
        { 0x6ac2, CanonicalOp::DzExpeditionEndsWarning },
        { 0x70d8, CanonicalOp::DzExpeditionList },
        { 0x15c4, CanonicalOp::DzMemberList },
        { 0x01cb, CanonicalOp::DzCompass },
        { 0x65e1, CanonicalOp::DzChooseZone },
        { 0x72ad, CanonicalOp::ShroudSelectionWindow },
        { 0x488b, CanonicalOp::ShroudRequestStats },
        { 0x1910, CanonicalOp::ShroudRespondStats },
        { 0x45d7, CanonicalOp::ShroudSelect },
        { 0x666d, CanonicalOp::ShroudSelectCancel },
        { 0x6016, CanonicalOp::ShroudProgress },
        { 0x66b4, CanonicalOp::ShroudProgress2 },
        { 0x1643, CanonicalOp::Shroud },
        { 0x4656, CanonicalOp::SpawnPositionUpdate },
        { 0x0433, CanonicalOp::ManaUpdate },
        { 0x6b76, CanonicalOp::EnduranceUpdate },
        { 0x7901, CanonicalOp::MobManaUpdate },
        { 0x1912, CanonicalOp::MobEnduranceUpdate },
        { 0x6ad7, CanonicalOp::LootRequest },
        { 0x6546, CanonicalOp::EndLootRequest },
        { 0x5960, CanonicalOp::LootItem },
        { 0x604d, CanonicalOp::LootComplete },
        { 0x550f, CanonicalOp::BazaarSearch },
        { 0x63c8, CanonicalOp::TraderDelItem },
        { 0x0a1d, CanonicalOp::BecomeTrader },
        { 0x2881, CanonicalOp::TraderShop },
        { 0x0c08, CanonicalOp::Trader },
        { 0x3672, CanonicalOp::TraderBuy },
        { 0x6db5, CanonicalOp::Barter },
        { 0x7113, CanonicalOp::TradeRequest },
        { 0x064a, CanonicalOp::TradeAcceptClick },
        { 0x606a, CanonicalOp::TradeRequestAck },
        { 0x0149, CanonicalOp::TradeCoins },
        { 0x3ff6, CanonicalOp::FinishTrade },
        { 0x527e, CanonicalOp::CancelTrade },
        { 0x2a6d, CanonicalOp::TradeMoneyUpdate },
        { 0xd677, CanonicalOp::MoneyUpdate },
        { 0x5ed3, CanonicalOp::TradeBusy },
        { 0x3c27, CanonicalOp::FinishWindow },
        { 0x6759, CanonicalOp::FinishWindow2 },
        { 0x101e, CanonicalOp::ItemVerifyRequest },
        { 0x21c7, CanonicalOp::ItemVerifyReply },
        { 0x0b27, CanonicalOp::ShopPlayerSell },
        { 0x442a, CanonicalOp::ShopRequest },
        { 0x3753, CanonicalOp::ShopEnd },
        { 0x4578, CanonicalOp::ShopEndConfirm },
        { 0x436a, CanonicalOp::ShopPlayerBuy },
        { 0x63c8, CanonicalOp::ShopDelItem },
        { 0x33e5, CanonicalOp::ClickObject },
        { 0x41b5, CanonicalOp::ClickObjectAction },
        { 0x71d1, CanonicalOp::ClearObject },
        { 0x58d9, CanonicalOp::RecipeDetails },
        { 0x7770, CanonicalOp::RecipesFavorite },
        { 0x6948, CanonicalOp::RecipesSearch },
        { 0x521c, CanonicalOp::RecipeReply },
        { 0x0322, CanonicalOp::RecipeAutoCombine },
        { 0x4212, CanonicalOp::TradeSkillCombine },
        { 0x5e79, CanonicalOp::OpenGuildTributeMaster },
        { 0x7c24, CanonicalOp::OpenTributeMaster },
        { 0x0c98, CanonicalOp::SelectTribute },
        { 0x0b89, CanonicalOp::TributeItem },
        { 0x314f, CanonicalOp::TributeMoney },
        { 0x6dc3, CanonicalOp::TributeToggle },
        { 0x15a7, CanonicalOp::TributePointUpdate },
        { 0x3ed4, CanonicalOp::LeaveAdventure },
        { 0x6acc, CanonicalOp::AdventureFinish },
        { 0x3541, CanonicalOp::AdventureInfoRequest },
        { 0x5cea, CanonicalOp::AdventureInfo },
        { 0x2c03, CanonicalOp::AdventureRequest },
        { 0x1d40, CanonicalOp::AdventureDetails },
        { 0x34f2, CanonicalOp::AdventureData },
        { 0x771f, CanonicalOp::AdventureUpdate },
        { 0x4e22, CanonicalOp::AdventureMerchantRequest },
        { 0x4dd5, CanonicalOp::AdventureMerchantResponse },
        { 0x7b7f, CanonicalOp::AdventureMerchantPurchase },
        { 0x179d, CanonicalOp::AdventureMerchantSell },
        { 0x7537, CanonicalOp::AdventurePointsUpdate },
        { 0x4786, CanonicalOp::AdventureStatsRequest },
        { 0x38b0, CanonicalOp::AdventureStatsReply },
        { 0x4cc6, CanonicalOp::AdventureLeaderboardRequest },
        { 0x4423, CanonicalOp::AdventureLeaderboardReply },
        { 0x54e8, CanonicalOp::GroupDisband },
        { 0x4f60, CanonicalOp::GroupInvite },
        { 0x7f2b, CanonicalOp::GroupFollow },
        { 0x5331, CanonicalOp::GroupUpdate },
        { 0x0786, CanonicalOp::GroupUpdateB },
        { 0x2736, CanonicalOp::GroupCancelInvite },
        { 0x3e22, CanonicalOp::GroupAcknowledge },
        { 0x58e6, CanonicalOp::GroupDelete },
        { 0x2736, CanonicalOp::CancelInvite },
        { 0x6c16, CanonicalOp::GroupFollow2 },
        { 0x5251, CanonicalOp::GroupInvite2 },
        { 0x0bd0, CanonicalOp::GroupDisbandYou },
        { 0x49f6, CanonicalOp::GroupDisbandOther },
        { 0x0c33, CanonicalOp::GroupLeaderChange },
        { 0x116d, CanonicalOp::GroupRoles },
        { 0x5851, CanonicalOp::GroupMakeLeader },
        { 0x292f, CanonicalOp::GroupMentor },
        { 0x105b, CanonicalOp::InspectBuffs },
        { 0x2c38, CanonicalOp::LFGCommand },
        { 0x28d4, CanonicalOp::LFGGetMatchesRequest },
        { 0x7a16, CanonicalOp::LFGGetMatchesResponse },
        { 0x189e, CanonicalOp::LFPGetMatchesRequest },
        { 0x589f, CanonicalOp::LFPGetMatchesResponse },
        { 0x7429, CanonicalOp::LFPCommand },
        { 0x60b5, CanonicalOp::RaidInvite },
        { 0x4d8b, CanonicalOp::RaidUpdate },
        { 0x30e2, CanonicalOp::Taunt },
        { 0x36f8, CanonicalOp::CombatAbility },
        { 0x7e45, CanonicalOp::SenseTraps },
        { 0x5821, CanonicalOp::PickPocket },
        { 0x6def, CanonicalOp::Disarm },
        { 0x1d22, CanonicalOp::Sneak },
        { 0x7093, CanonicalOp::Fishing },
        { 0x221a, CanonicalOp::InstillDoubt },
        { 0x002b, CanonicalOp::FeignDeath },
        { 0x10a6, CanonicalOp::Mend },
        { 0x032b, CanonicalOp::LDoNOpen },
        { 0x5832, CanonicalOp::TaskActivityComplete },
        { 0x66ba, CanonicalOp::TaskMemberList },
        { 0x98f6, CanonicalOp::OpenNewTasksWindow },
        { 0x6255, CanonicalOp::AvaliableTask },
        { 0x17d5, CanonicalOp::AcceptNewTask },
        { 0x547c, CanonicalOp::TaskHistoryRequest },
        { 0x4524, CanonicalOp::TaskHistoryReply },
        { 0x3bf5, CanonicalOp::CancelTask },
        { 0x4b49, CanonicalOp::NewTitlesAvailable },
        { 0x4d3e, CanonicalOp::RequestTitles },
        { 0x0d96, CanonicalOp::SendTitleList },
        { 0x675c, CanonicalOp::SetTitle },
        { 0x75f5, CanonicalOp::SetTitleReply },
        { 0x3015, CanonicalOp::MercenaryDataRequest },
        { 0x0eaa, CanonicalOp::MercenaryDataResponse },
        { 0x099e, CanonicalOp::MercenaryHire },
        { 0x0cae, CanonicalOp::MercenaryTimer },
        { 0x2538, CanonicalOp::MercenaryAssign },
        { 0x367f, CanonicalOp::MercenaryUnknown1 },
        { 0x57f2, CanonicalOp::MercenaryDataUpdate },
        { 0x50c1, CanonicalOp::MercenaryCommand },
        { 0x3c58, CanonicalOp::MercenarySuspendRequest },
        { 0x4b82, CanonicalOp::MercenarySuspendResponse },
        { 0x5fe3, CanonicalOp::MercenaryUnsuspendResponse },
        { 0x05f1, CanonicalOp::MercenaryDataUpdateRequest },
        { 0x319a, CanonicalOp::MercenaryDismiss },
        { 0x184e, CanonicalOp::MercenaryTimerRequest },
        { 0x7f72, CanonicalOp::PlayMP3 },
        { 0x82d7, CanonicalOp::ItemRecastDelay },
        { 0x23a1, CanonicalOp::ShieldGroup }
    };
}

#endif//_EQP_OPCODES_UNDERFOOT_HPP_
