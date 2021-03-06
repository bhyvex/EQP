
#ifndef _EQP_OPCODES_SOF_HPP_
#define _EQP_OPCODES_SOF_HPP_

#include "define.hpp"
#include "opcodes_canonical.hpp"
#include "opcode_translate.hpp"

namespace SecretsOfFaydwer
{
    enum Op : uint16_t
    {
        SendLoginInfo = 0x6c3c,
        ApproveWorld = 0x7fc0,
        LogServer = 0x129a,
        SendCharInfo = 0x6040,
        ExpansionInfo = 0x0a1b,
        GuildsList = 0x04fb,
        EnterWorld = 0x1340,
        PostEnterWorld = 0x1aee,
        SendSpellChecksum = 0x22cf,
        SendSkillCapsChecksum = 0x43ba,
        DeleteCharacter = 0x789f,
        CharacterCreateRequest = 0x7e32,
        CharacterCreate = 0x009b,
        RandomNameGenerator = 0x0149a,
        ApproveName = 0x2037,
        MOTD = 0x5711,
        SetChatServer = 0x71b8,
        SetChatServer2 = 0x32cc,
        ZoneServerInfo = 0x18b1,
        WorldComplete = 0x2486,
        WorldUnknown001 = 0x7930,
        FloatListThing = 0x6177,
        ZoneUnavail = 0x07a2,
        WorldClientReady = 0x2ebd,
        AckPacket = 0x4d38,
        ZoneEntry = 0x737e,
        ReqNewZone = 0x5417,
        NewZone = 0x5d22,
        ZoneSpawns = 0x5af2,
        PlayerProfile = 0x0feb,
        TimeOfDay = 0x7274,
        LevelUpdate = 0x1036,
        Stamina = 0x7120,
        RequestClientZoneChange = 0x7899,
        ZoneChange = 0x201e,
        SpawnAppearance = 0x50ec,
        TributeUpdate = 0x71fb,
        TributeTimer = 0x2871,
        TaskDescription = 0x0af9,
        TaskActivity = 0x2e60,
        CompletedTasks = 0x75ac,
        Weather = 0x70a5,
        SendAATable = 0x6f05,
        ClearAA = 0x71b9,
        ClearLeadershipAbilities = 0x74e5,
        UpdateAA = 0x45d2,
        RespondAA = 0x4426,
        ReqClientSpawn = 0x014c,
        SpawnDoor = 0x68c8,
        GroundSpawn = 0x30da,
        SendZonepoints = 0x2992,
        SendAAStats = 0x60db,
        WorldObjectsSent = 0x3703,
        BlockedBuffs = 0x39c4,
        RemoveBlockedBuffs = 0x125e,
        ClearBlockedBuffs = 0x2f8b,
        SendExpZonein = 0x1fa1,
        SendTributes = 0x6764,
        TributeInfo = 0x68c2,
        SendGuildTributes = 0x3f33,
        AAExpUpdate = 0x3518,
        ExpUpdate = 0x6d0b,
        HPUpdate = 0x62f6,
        ManaChange = 0x0659,
        TGB = 0x0137,
        SpecialMesg = 0x1126,
        GuildMemberList = 0x317c,
        GuildMOTD = 0x3309,
        CharInventory = 0x08a3,
        WearChange = 0x25f0,
        ClientUpdate = 0x5cf3,
        ClientReady = 0x2854,
        SetServerFilter = 0x7038,
        GetGuildMOTD = 0x0b50,
        GetGuildMOTDReply = 0x4289,
        GuildMemberUpdate = 0x71d1,
        GuildInvite = 0x430f,
        GuildRemove = 0x7149,
        GuildPeace = 0x1b42,
        SetGuildMOTD = 0x273f,
        GuildList = 0x04fb,
        GuildWar = 0x5f91,
        GuildLeader = 0x7703,
        GuildDelete = 0x0b9a,
        GuildInviteAccept = 0x110f,
        GuildDemote = 0x2cdf,
        GuildPublicNote = 0x28a9,
        GuildManageBanker = 0x899b,
        GuildBank = 0x43ff,
        SetGuildRank = 0x4914,
        GuildUpdateURLAndChannel = 0x60a5,
        LFGuild = 0x3563,
        GMServers = 0x1f23,
        GMBecomeNPC = 0x42fa,
        GMZoneRequest = 0x7678,
        GMZoneRequest2 = 0x6833,
        GMGoto = 0x1e2c,
        GMSearchCorpse = 0x5f15,
        GMHideMe = 0x2e3c,
        GMDelCorpse = 0x79df,
        GMApproval = 0x5546,
        GMToggle = 0x7ab6,
        GMSummon = 0x3235,
        GMEmoteZone = 0x26cc,
        GMEmoteWorld = 0x6256,
        GMFind = 0x24d8,
        GMKick = 0x7a92,
        GMKill = 0x7b6b,
        GMNameChange = 0x74b5,
        GMLastName = 0x0375,
        InspectAnswer = 0x084f,
        Action2 = 0x0ef2,
        BeginCast = 0x5a50,
        ColoredText = 0x3bc7,
        ConsentResponse = 0x4d30,
        MemorizeSpell = 0x6a93,
        SwapSpell = 0x1418,
        CastSpell = 0x7f5d,
        Consider = 0x32e1,
        FormattedMessage = 0x5b9e,
        SimpleMessage = 0x553e,
        Buff = 0x7bd6,
        Illusion = 0x7f86,
        MoneyOnCorpse = 0x51c9,
        RandomReply = 0x649c,
        DenyResponse = 0x607e,
        SkillUpdate = 0x29e0,
        GMTrainSkillConfirm = 0x33a3,
        RandomReq = 0x4e2d,
        Death = 0x596f,
        GMTraining = 0x0362,
        GMEndTraining = 0x6768,
        GMTrainSkill = 0x7498,
        Animation = 0x13a1,
        Begging = 0x7ae0,
        Consent = 0x0fb9,
        ConsentDeny = 0x79d7,
        AutoFire = 0x1486,
        PetCommands = 0x573a,
        DeleteSpell = 0x6d7e,
        Surname = 0x683e,
        ClearSurname = 0x2613,
        FaceChange = 0x482d,
        SenseHeading = 0x1237,
        Action = 0x5285,
        ConsiderCorpse = 0x4cbb,
        CorpseDrag = 0x51e1,
        CorpseDrop = 0x77a6,
        Bug = 0x1cf0,
        Feedback = 0x216c,
        Report = 0x5bd9,
        Damage = 0x0ef2,
        ChannelMessage = 0x3c7d,
        Assist = 0x15a4,
        AssistGroup = 0x03ce,
        MoveCoin = 0x1d9d,
        ZonePlayerToBind = 0x6542,
        KeyRing = 0x2f10,
        WhoAllRequest = 0x34d4,
        WhoAllResponse = 0x3817,
        FriendsWho = 0x237b,
        ConfirmDelete = 0x79a5,
        Logout = 0x3874,
        Rewind = 0x428f,
        TargetCommand = 0x2da9,
        InspectRequest = 0x5a79,
        Hide = 0x65ff,
        Jump = 0x7871,
        Camp = 0x6807,
        Emote = 0x5f4d,
        SetRunMode = 0x2716,
        BankerChange = 0x03dd,
        TargetMouse = 0x4395,
        MobHealth = 0x311a,
        InitialMobHealth = 0x23f1,
        TargetHoTT = 0x1306,
        DeleteSpawn = 0x15da,
        MobUpdate = 0x7647,
        AutoAttack = 0x3427,
        AutoAttack2 = 0x6017,
        Consume = 0x729a,
        MoveItem = 0x14b3,
        DeleteItem = 0x7dd4,
        DeleteCharge = 0x32e2,
        ItemPacket = 0x78cd,
        ItemLinkResponse = 0x31e4,
        ItemLinkClick = 0x2de4,
        NewSpawn = 0x581a,
        Track = 0x060a,
        TrackTarget = 0x21e8,
        TrackUnknown = 0x6a70,
        ClickDoor = 0x5ac1,
        MoveDoor = 0x61df,
        RemoveAllDoors = 0x69d8,
        EnvDamage = 0x20e7,
        BoardBoat = 0x54a7,
        Forage = 0x54c5,
        LeaveBoat = 0x56a2,
        ControlBoat = 0x4ce7,
        SafeFallSuccess = 0x1584,
        RezzComplete = 0x4b0d,
        RezzRequest = 0x2bb7,
        RezzAnswer = 0x076d,
        Shielding = 0x0829,
        RequestDuel = 0x3a2b,
        MobRename = 0x6be5,
        AugmentItem = 0x172a,
        WeaponEquip1 = 0x7260,
        PlayerStateAdd = 0x5c2f,
        PlayerStateRemove = 0x6213,
        ApplyPoison = 0x4543,
        Save = 0x72f2,
        TestBuff = 0x07bf,
        CustomTitles = 0x2e8f,
        Split = 0x198e,
        YellForHelp = 0x4f4a,
        LoadSpellSet = 0x05b5,
        Bandolier = 0x3fd4,
        PotionBelt = 0x16f3,
        DuelResponse = 0x5e59,
        SaveOnZoneReq = 0x1103,
        ReadBook = 0x424a,
        Dye = 0x3611,
        InterruptCast = 0x51f6,
        AAAction = 0x0a4f,
        LeadershipExpToggle = 0x24d4,
        LeadershipExpUpdate = 0x58b6,
        PurchaseLeadershipAA = 0x1408,
        UpdateLeadershipAA = 0x7abf,
        MarkNPC = 0x4697,
        MarkRaidNPC = 0x00c6,
        ClearNPCMarks = 0x2ff2,
        ClearRaidNPCMarks = 0x56a9,
        DoGroupLeadershipAbility = 0x5a64,
        DelegateAbility = 0x57e3,
        SetGroupTarget = 0x1651,
        DuelResponse2 = 0x2a85,
        Charm = 0x2f32,
        Stun = 0x55bf,
        FindPersonRequest = 0x07f0,
        FindPersonReply = 0x7770,
        Sound = 0x2b02,
        PetBuffWindow = 0x124a,
        LevelAppearance = 0x3ec8,
        Translocate = 0x1f0f,
        Sacrifice = 0x55c9,
        PopupResponse = 0x028b,
        OnLevelMessage = 0x0332,
        AugmentInfo = 0x08f8,
        Petition = 0x3a46,
        SomeItemPacketMaybe = 0x08fa,
        PVPStats = 0x6af1,
        PVPLeaderBoardRequest = 0x5b3b,
        PVPLeaderBoardReply = 0x3a69,
        PVPLeaderBoardDetailsRequest = 0x43b6,
        PVPLeaderBoardDetailsReply = 0x680c,
        RestState = 0x116e,
        RespawnWindow = 0x7bf6,
        DisciplineTimer = 0x53c5,
        LDoNButton = 0x7eac,
        SetStartCity = 0x7e91,
        VoiceMacroIn = 0x6276,
        VoiceMacroOut = 0x30d2,
        DisciplineUpdate = 0x20e8,
        CameraEffect = 0x23f9,
        SpellEffect = 0x3e90,
        AltCurrency = 0x0f05,
        AltCurrencyMerchantRequest = 0x433f,
        AltCurrencyMerchantReply = 0x7b20,
        AltCurrencyPurchase = 0x3994,
        AltCurrencySell = 0x2ac3,
        AltCurrencySellSelection = 0x7d00,
        AltCurrencyReclaim = 0x1996,
        RemoveNimbusEffect = 0x5872,
        InspectMessageUpdate = 0x67e9,
        OpenInventory = 0x66c8,
        OpenContainer = 0x10e3,
        Marquee = 0x2f75,
        Untargetable = 0x3e36,
        DzQuit = 0x20d6,
        DzListTimers = 0x4e4b,
        DzAddPlayer = 0x426a,
        DzRemovePlayer = 0x2ce8,
        DzSwapPlayer = 0x2c3e,
        DzMakeLeader = 0x1a75,
        DzPlayerList = 0x5116,
        DzJoinExpeditionConfirm = 0x1793,
        DzJoinExpeditionReply = 0x7a6f,
        DzExpeditionInfo = 0x60a6,
        DzMemberStatus = 0x0516,
        DzLeaderStatus = 0x79d3,
        DzExpeditionEndsWarning = 0x5153,
        DzExpeditionList = 0x02ac,
        DzMemberList = 0x5e14,
        DzCompass = 0x531d,
        DzChooseZone = 0x3c5b,
        LootRequest = 0x36e3,
        EndLootRequest = 0x6599,
        LootItem = 0x3760,
        LootComplete = 0x48f3,
        BazaarSearch = 0x14f2,
        TraderDelItem = 0x068d,
        BecomeTrader = 0x32b7,
        TraderShop = 0x1acf,
        Trader = 0x6b41,
        TraderBuy = 0x7569,
        Barter = 0x51bf,
        TradeRequest = 0x180d,
        TradeAcceptClick = 0x1d07,
        TradeRequestAck = 0x1255,
        TradeCoins = 0x08ca,
        FinishTrade = 0x30b7,
        CancelTrade = 0x7a43,
        TradeMoneyUpdate = 0x69e7,
        MoneyUpdate = 0x305a,
        TradeBusy = 0x5f49,
        FinishWindow = 0x4919,
        FinishWindow2 = 0x1758,
        ItemVerifyRequest = 0x0cc2,
        ItemVerifyReply = 0x41ee,
        ShopPlayerSell = 0x5a58,
        ShopRequest = 0x5fb7,
        ShopEnd = 0x0bd9,
        ShopEndConfirm = 0x475f,
        ShopPlayerBuy = 0x09c4,
        ShopDelItem = 0x068d,
        ClickObject = 0x21b3,
        ClickObjectAction = 0x67c0,
        ClearObject = 0x0e66,
        RecipeDetails = 0x0706,
        RecipesFavorite = 0x2e2c,
        RecipesSearch = 0x41a2,
        RecipeReply = 0x67f5,
        RecipeAutoCombine = 0x0427,
        TradeSkillCombine = 0x163c,
        OpenGuildTributeMaster = 0x3223,
        OpenTributeMaster = 0x5027,
        SelectTribute = 0x1d8c,
        TributeItem = 0x16d6,
        TributeMoney = 0x65bc,
        TributeToggle = 0xe59f,
        TributePointUpdate = 0x656c,
        LeaveAdventure = 0x1342,
        AdventureFinish = 0x0974,
        AdventureInfoRequest = 0x6e84,
        AdventureInfo = 0x526d,
        AdventureRequest = 0x4f4c,
        AdventureDetails = 0x7f4d,
        AdventureData = 0x10b9,
        AdventureUpdate = 0x53c2,
        AdventureMerchantRequest = 0x71b2,
        AdventureMerchantResponse = 0x40d6,
        AdventureMerchantPurchase = 0x5488,
        AdventureMerchantSell = 0x1c26,
        AdventurePointsUpdate = 0x6583,
        AdventureStatsRequest = 0x70b2,
        AdventureStatsReply = 0x5a3a,
        AdventureLeaderboardRequest = 0x2a28,
        AdventureLeaderboardReply = 0x6555,
        GroupDisband = 0x4b26,
        GroupInvite = 0x6321,
        GroupFollow = 0x1a12,
        GroupUpdate = 0x2e5c,
        GroupCancelInvite = 0x596c,
        GroupAcknowledge = 0x1306,
        CancelInvite = 0x596c,
        GroupFollow2 = 0x59d4,
        GroupInvite2 = 0x07f6,
        GroupMentor = 0x9ef3,
        InspectBuffs = 0x3547,
        LFGCommand = 0x5d81,
        LFGGetMatchesRequest = 0x21e0,
        LFGGetMatchesResponse = 0x6dca,
        LFPGetMatchesRequest = 0x601a,
        LFPGetMatchesResponse = 0x2274,
        LFPCommand = 0x1f00,
        RaidInvite = 0x0e11,
        RaidUpdate = 0x237e,
        Taunt = 0x094d,
        CombatAbility = 0x045d,
        SenseTraps = 0x7466,
        PickPocket = 0x768a,
        Disarm = 0x19b6,
        Sneak = 0x17c4,
        Fishing = 0x73ab,
        InstillDoubt = 0x6865,
        FeignDeath = 0x1c68,
        Mend = 0x7767,
        LDoNOpen = 0x4b92,
        TaskActivityComplete = 0x7338,
        OpenNewTasksWindow = 0x17c3,
        AvaliableTask = 0x5d1d,
        AcceptNewTask = 0x66a8,
        TaskHistoryRequest = 0x3035,
        TaskHistoryReply = 0x3a60,
        CancelTask = 0x4db6,
        TaskMemberList = 0x3713,
        TaskMemberInvite = 0x3cde,
        TaskMemberInviteResponse = 0x6cab,
        TaskMemberChange = 0x354a,
        TaskMakeLeader = 0x5050,
        TaskAddPlayer = 0x5d1d,
        TaskRemovePlayer = 0x516f,
        TaskPlayerList = 0x0ad6,
        TaskQuit = 0x2c8c,
        NewTitlesAvailable = 0x179c,
        RequestTitles = 0x3445,
        SendTitleList = 0x3754,
        SetTitle = 0x54fe,
        SetTitleReply = 0x690b,
        IncreaseStats = 0x5ecb,
        VetRewardsAvaliable = 0x044b,
        VetClaimRequest = 0x7503,
        VetClaimReply = 0x01e1,
        PlayMP3 = 0x0d1c,
        CrystalCountUpdate = 0x64c1,
        CrystalCreate = 0x65e2,
        CrystalReclaim = 0x0730,
        LoginUnknown1 = 0x22cf,
        LoginUnknown2 = 0x43ba,
        ItemViewUnknown = 0x4db4,
        ItemRecastDelay = 0x0ada,
        COUNT
    };

    static const OpCodeTranslation toCanonical[] = {
        { 0x6c3c, CanonicalOp::SendLoginInfo },
        { 0x7fc0, CanonicalOp::ApproveWorld },
        { 0x129a, CanonicalOp::LogServer },
        { 0x6040, CanonicalOp::SendCharInfo },
        { 0x0a1b, CanonicalOp::ExpansionInfo },
        { 0x04fb, CanonicalOp::GuildsList },
        { 0x1340, CanonicalOp::EnterWorld },
        { 0x1aee, CanonicalOp::PostEnterWorld },
        { 0x22cf, CanonicalOp::SendSpellChecksum },
        { 0x43ba, CanonicalOp::SendSkillCapsChecksum },
        { 0x789f, CanonicalOp::DeleteCharacter },
        { 0x7e32, CanonicalOp::CharacterCreateRequest },
        { 0x009b, CanonicalOp::CharacterCreate },
        { 0x0149a, CanonicalOp::RandomNameGenerator },
        { 0x2037, CanonicalOp::ApproveName },
        { 0x5711, CanonicalOp::MOTD },
        { 0x71b8, CanonicalOp::SetChatServer },
        { 0x32cc, CanonicalOp::SetChatServer2 },
        { 0x18b1, CanonicalOp::ZoneServerInfo },
        { 0x2486, CanonicalOp::WorldComplete },
        { 0x7930, CanonicalOp::WorldUnknown001 },
        { 0x6177, CanonicalOp::FloatListThing },
        { 0x07a2, CanonicalOp::ZoneUnavail },
        { 0x2ebd, CanonicalOp::WorldClientReady },
        { 0x4d38, CanonicalOp::AckPacket },
        { 0x737e, CanonicalOp::ZoneEntry },
        { 0x5417, CanonicalOp::ReqNewZone },
        { 0x5d22, CanonicalOp::NewZone },
        { 0x5af2, CanonicalOp::ZoneSpawns },
        { 0x0feb, CanonicalOp::PlayerProfile },
        { 0x7274, CanonicalOp::TimeOfDay },
        { 0x1036, CanonicalOp::LevelUpdate },
        { 0x7120, CanonicalOp::Stamina },
        { 0x7899, CanonicalOp::RequestClientZoneChange },
        { 0x201e, CanonicalOp::ZoneChange },
        { 0x50ec, CanonicalOp::SpawnAppearance },
        { 0x71fb, CanonicalOp::TributeUpdate },
        { 0x2871, CanonicalOp::TributeTimer },
        { 0x0af9, CanonicalOp::TaskDescription },
        { 0x2e60, CanonicalOp::TaskActivity },
        { 0x75ac, CanonicalOp::CompletedTasks },
        { 0x70a5, CanonicalOp::Weather },
        { 0x6f05, CanonicalOp::SendAATable },
        { 0x71b9, CanonicalOp::ClearAA },
        { 0x74e5, CanonicalOp::ClearLeadershipAbilities },
        { 0x45d2, CanonicalOp::UpdateAA },
        { 0x4426, CanonicalOp::RespondAA },
        { 0x014c, CanonicalOp::ReqClientSpawn },
        { 0x68c8, CanonicalOp::SpawnDoor },
        { 0x30da, CanonicalOp::GroundSpawn },
        { 0x2992, CanonicalOp::SendZonepoints },
        { 0x60db, CanonicalOp::SendAAStats },
        { 0x3703, CanonicalOp::WorldObjectsSent },
        { 0x39c4, CanonicalOp::BlockedBuffs },
        { 0x125e, CanonicalOp::RemoveBlockedBuffs },
        { 0x2f8b, CanonicalOp::ClearBlockedBuffs },
        { 0x1fa1, CanonicalOp::SendExpZonein },
        { 0x6764, CanonicalOp::SendTributes },
        { 0x68c2, CanonicalOp::TributeInfo },
        { 0x3f33, CanonicalOp::SendGuildTributes },
        { 0x3518, CanonicalOp::AAExpUpdate },
        { 0x6d0b, CanonicalOp::ExpUpdate },
        { 0x62f6, CanonicalOp::HPUpdate },
        { 0x0659, CanonicalOp::ManaChange },
        { 0x0137, CanonicalOp::TGB },
        { 0x1126, CanonicalOp::SpecialMesg },
        { 0x317c, CanonicalOp::GuildMemberList },
        { 0x3309, CanonicalOp::GuildMOTD },
        { 0x08a3, CanonicalOp::CharInventory },
        { 0x25f0, CanonicalOp::WearChange },
        { 0x5cf3, CanonicalOp::ClientUpdate },
        { 0x2854, CanonicalOp::ClientReady },
        { 0x7038, CanonicalOp::SetServerFilter },
        { 0x0b50, CanonicalOp::GetGuildMOTD },
        { 0x4289, CanonicalOp::GetGuildMOTDReply },
        { 0x71d1, CanonicalOp::GuildMemberUpdate },
        { 0x430f, CanonicalOp::GuildInvite },
        { 0x7149, CanonicalOp::GuildRemove },
        { 0x1b42, CanonicalOp::GuildPeace },
        { 0x273f, CanonicalOp::SetGuildMOTD },
        { 0x04fb, CanonicalOp::GuildList },
        { 0x5f91, CanonicalOp::GuildWar },
        { 0x7703, CanonicalOp::GuildLeader },
        { 0x0b9a, CanonicalOp::GuildDelete },
        { 0x110f, CanonicalOp::GuildInviteAccept },
        { 0x2cdf, CanonicalOp::GuildDemote },
        { 0x28a9, CanonicalOp::GuildPublicNote },
        { 0x899b, CanonicalOp::GuildManageBanker },
        { 0x43ff, CanonicalOp::GuildBank },
        { 0x4914, CanonicalOp::SetGuildRank },
        { 0x60a5, CanonicalOp::GuildUpdateURLAndChannel },
        { 0x3563, CanonicalOp::LFGuild },
        { 0x1f23, CanonicalOp::GMServers },
        { 0x42fa, CanonicalOp::GMBecomeNPC },
        { 0x7678, CanonicalOp::GMZoneRequest },
        { 0x6833, CanonicalOp::GMZoneRequest2 },
        { 0x1e2c, CanonicalOp::GMGoto },
        { 0x5f15, CanonicalOp::GMSearchCorpse },
        { 0x2e3c, CanonicalOp::GMHideMe },
        { 0x79df, CanonicalOp::GMDelCorpse },
        { 0x5546, CanonicalOp::GMApproval },
        { 0x7ab6, CanonicalOp::GMToggle },
        { 0x3235, CanonicalOp::GMSummon },
        { 0x26cc, CanonicalOp::GMEmoteZone },
        { 0x6256, CanonicalOp::GMEmoteWorld },
        { 0x24d8, CanonicalOp::GMFind },
        { 0x7a92, CanonicalOp::GMKick },
        { 0x7b6b, CanonicalOp::GMKill },
        { 0x74b5, CanonicalOp::GMNameChange },
        { 0x0375, CanonicalOp::GMLastName },
        { 0x084f, CanonicalOp::InspectAnswer },
        { 0x0ef2, CanonicalOp::Action2 },
        { 0x5a50, CanonicalOp::BeginCast },
        { 0x3bc7, CanonicalOp::ColoredText },
        { 0x4d30, CanonicalOp::ConsentResponse },
        { 0x6a93, CanonicalOp::MemorizeSpell },
        { 0x1418, CanonicalOp::SwapSpell },
        { 0x7f5d, CanonicalOp::CastSpell },
        { 0x32e1, CanonicalOp::Consider },
        { 0x5b9e, CanonicalOp::FormattedMessage },
        { 0x553e, CanonicalOp::SimpleMessage },
        { 0x7bd6, CanonicalOp::Buff },
        { 0x7f86, CanonicalOp::Illusion },
        { 0x51c9, CanonicalOp::MoneyOnCorpse },
        { 0x649c, CanonicalOp::RandomReply },
        { 0x607e, CanonicalOp::DenyResponse },
        { 0x29e0, CanonicalOp::SkillUpdate },
        { 0x33a3, CanonicalOp::GMTrainSkillConfirm },
        { 0x4e2d, CanonicalOp::RandomReq },
        { 0x596f, CanonicalOp::Death },
        { 0x0362, CanonicalOp::GMTraining },
        { 0x6768, CanonicalOp::GMEndTraining },
        { 0x7498, CanonicalOp::GMTrainSkill },
        { 0x13a1, CanonicalOp::Animation },
        { 0x7ae0, CanonicalOp::Begging },
        { 0x0fb9, CanonicalOp::Consent },
        { 0x79d7, CanonicalOp::ConsentDeny },
        { 0x1486, CanonicalOp::AutoFire },
        { 0x573a, CanonicalOp::PetCommands },
        { 0x6d7e, CanonicalOp::DeleteSpell },
        { 0x683e, CanonicalOp::Surname },
        { 0x2613, CanonicalOp::ClearSurname },
        { 0x482d, CanonicalOp::FaceChange },
        { 0x1237, CanonicalOp::SenseHeading },
        { 0x5285, CanonicalOp::Action },
        { 0x4cbb, CanonicalOp::ConsiderCorpse },
        { 0x51e1, CanonicalOp::CorpseDrag },
        { 0x77a6, CanonicalOp::CorpseDrop },
        { 0x1cf0, CanonicalOp::Bug },
        { 0x216c, CanonicalOp::Feedback },
        { 0x5bd9, CanonicalOp::Report },
        { 0x0ef2, CanonicalOp::Damage },
        { 0x3c7d, CanonicalOp::ChannelMessage },
        { 0x15a4, CanonicalOp::Assist },
        { 0x03ce, CanonicalOp::AssistGroup },
        { 0x1d9d, CanonicalOp::MoveCoin },
        { 0x6542, CanonicalOp::ZonePlayerToBind },
        { 0x2f10, CanonicalOp::KeyRing },
        { 0x34d4, CanonicalOp::WhoAllRequest },
        { 0x3817, CanonicalOp::WhoAllResponse },
        { 0x237b, CanonicalOp::FriendsWho },
        { 0x79a5, CanonicalOp::ConfirmDelete },
        { 0x3874, CanonicalOp::Logout },
        { 0x428f, CanonicalOp::Rewind },
        { 0x2da9, CanonicalOp::TargetCommand },
        { 0x5a79, CanonicalOp::InspectRequest },
        { 0x65ff, CanonicalOp::Hide },
        { 0x7871, CanonicalOp::Jump },
        { 0x6807, CanonicalOp::Camp },
        { 0x5f4d, CanonicalOp::Emote },
        { 0x2716, CanonicalOp::SetRunMode },
        { 0x03dd, CanonicalOp::BankerChange },
        { 0x4395, CanonicalOp::TargetMouse },
        { 0x311a, CanonicalOp::MobHealth },
        { 0x23f1, CanonicalOp::InitialMobHealth },
        { 0x1306, CanonicalOp::TargetHoTT },
        { 0x15da, CanonicalOp::DeleteSpawn },
        { 0x7647, CanonicalOp::MobUpdate },
        { 0x3427, CanonicalOp::AutoAttack },
        { 0x6017, CanonicalOp::AutoAttack2 },
        { 0x729a, CanonicalOp::Consume },
        { 0x14b3, CanonicalOp::MoveItem },
        { 0x7dd4, CanonicalOp::DeleteItem },
        { 0x32e2, CanonicalOp::DeleteCharge },
        { 0x78cd, CanonicalOp::ItemPacket },
        { 0x31e4, CanonicalOp::ItemLinkResponse },
        { 0x2de4, CanonicalOp::ItemLinkClick },
        { 0x581a, CanonicalOp::NewSpawn },
        { 0x060a, CanonicalOp::Track },
        { 0x21e8, CanonicalOp::TrackTarget },
        { 0x6a70, CanonicalOp::TrackUnknown },
        { 0x5ac1, CanonicalOp::ClickDoor },
        { 0x61df, CanonicalOp::MoveDoor },
        { 0x69d8, CanonicalOp::RemoveAllDoors },
        { 0x20e7, CanonicalOp::EnvDamage },
        { 0x54a7, CanonicalOp::BoardBoat },
        { 0x54c5, CanonicalOp::Forage },
        { 0x56a2, CanonicalOp::LeaveBoat },
        { 0x4ce7, CanonicalOp::ControlBoat },
        { 0x1584, CanonicalOp::SafeFallSuccess },
        { 0x4b0d, CanonicalOp::RezzComplete },
        { 0x2bb7, CanonicalOp::RezzRequest },
        { 0x076d, CanonicalOp::RezzAnswer },
        { 0x0829, CanonicalOp::Shielding },
        { 0x3a2b, CanonicalOp::RequestDuel },
        { 0x6be5, CanonicalOp::MobRename },
        { 0x172a, CanonicalOp::AugmentItem },
        { 0x7260, CanonicalOp::WeaponEquip1 },
        { 0x5c2f, CanonicalOp::PlayerStateAdd },
        { 0x6213, CanonicalOp::PlayerStateRemove },
        { 0x4543, CanonicalOp::ApplyPoison },
        { 0x72f2, CanonicalOp::Save },
        { 0x07bf, CanonicalOp::TestBuff },
        { 0x2e8f, CanonicalOp::CustomTitles },
        { 0x198e, CanonicalOp::Split },
        { 0x4f4a, CanonicalOp::YellForHelp },
        { 0x05b5, CanonicalOp::LoadSpellSet },
        { 0x3fd4, CanonicalOp::Bandolier },
        { 0x16f3, CanonicalOp::PotionBelt },
        { 0x5e59, CanonicalOp::DuelResponse },
        { 0x1103, CanonicalOp::SaveOnZoneReq },
        { 0x424a, CanonicalOp::ReadBook },
        { 0x3611, CanonicalOp::Dye },
        { 0x51f6, CanonicalOp::InterruptCast },
        { 0x0a4f, CanonicalOp::AAAction },
        { 0x24d4, CanonicalOp::LeadershipExpToggle },
        { 0x58b6, CanonicalOp::LeadershipExpUpdate },
        { 0x1408, CanonicalOp::PurchaseLeadershipAA },
        { 0x7abf, CanonicalOp::UpdateLeadershipAA },
        { 0x4697, CanonicalOp::MarkNPC },
        { 0x00c6, CanonicalOp::MarkRaidNPC },
        { 0x2ff2, CanonicalOp::ClearNPCMarks },
        { 0x56a9, CanonicalOp::ClearRaidNPCMarks },
        { 0x5a64, CanonicalOp::DoGroupLeadershipAbility },
        { 0x57e3, CanonicalOp::DelegateAbility },
        { 0x1651, CanonicalOp::SetGroupTarget },
        { 0x2a85, CanonicalOp::DuelResponse2 },
        { 0x2f32, CanonicalOp::Charm },
        { 0x55bf, CanonicalOp::Stun },
        { 0x07f0, CanonicalOp::FindPersonRequest },
        { 0x7770, CanonicalOp::FindPersonReply },
        { 0x2b02, CanonicalOp::Sound },
        { 0x124a, CanonicalOp::PetBuffWindow },
        { 0x3ec8, CanonicalOp::LevelAppearance },
        { 0x1f0f, CanonicalOp::Translocate },
        { 0x55c9, CanonicalOp::Sacrifice },
        { 0x028b, CanonicalOp::PopupResponse },
        { 0x0332, CanonicalOp::OnLevelMessage },
        { 0x08f8, CanonicalOp::AugmentInfo },
        { 0x3a46, CanonicalOp::Petition },
        { 0x08fa, CanonicalOp::SomeItemPacketMaybe },
        { 0x6af1, CanonicalOp::PVPStats },
        { 0x5b3b, CanonicalOp::PVPLeaderBoardRequest },
        { 0x3a69, CanonicalOp::PVPLeaderBoardReply },
        { 0x43b6, CanonicalOp::PVPLeaderBoardDetailsRequest },
        { 0x680c, CanonicalOp::PVPLeaderBoardDetailsReply },
        { 0x116e, CanonicalOp::RestState },
        { 0x7bf6, CanonicalOp::RespawnWindow },
        { 0x53c5, CanonicalOp::DisciplineTimer },
        { 0x7eac, CanonicalOp::LDoNButton },
        { 0x7e91, CanonicalOp::SetStartCity },
        { 0x6276, CanonicalOp::VoiceMacroIn },
        { 0x30d2, CanonicalOp::VoiceMacroOut },
        { 0x20e8, CanonicalOp::DisciplineUpdate },
        { 0x23f9, CanonicalOp::CameraEffect },
        { 0x3e90, CanonicalOp::SpellEffect },
        { 0x0f05, CanonicalOp::AltCurrency },
        { 0x433f, CanonicalOp::AltCurrencyMerchantRequest },
        { 0x7b20, CanonicalOp::AltCurrencyMerchantReply },
        { 0x3994, CanonicalOp::AltCurrencyPurchase },
        { 0x2ac3, CanonicalOp::AltCurrencySell },
        { 0x7d00, CanonicalOp::AltCurrencySellSelection },
        { 0x1996, CanonicalOp::AltCurrencyReclaim },
        { 0x5872, CanonicalOp::RemoveNimbusEffect },
        { 0x67e9, CanonicalOp::InspectMessageUpdate },
        { 0x66c8, CanonicalOp::OpenInventory },
        { 0x10e3, CanonicalOp::OpenContainer },
        { 0x2f75, CanonicalOp::Marquee },
        { 0x3e36, CanonicalOp::Untargetable },
        { 0x20d6, CanonicalOp::DzQuit },
        { 0x4e4b, CanonicalOp::DzListTimers },
        { 0x426a, CanonicalOp::DzAddPlayer },
        { 0x2ce8, CanonicalOp::DzRemovePlayer },
        { 0x2c3e, CanonicalOp::DzSwapPlayer },
        { 0x1a75, CanonicalOp::DzMakeLeader },
        { 0x5116, CanonicalOp::DzPlayerList },
        { 0x1793, CanonicalOp::DzJoinExpeditionConfirm },
        { 0x7a6f, CanonicalOp::DzJoinExpeditionReply },
        { 0x60a6, CanonicalOp::DzExpeditionInfo },
        { 0x0516, CanonicalOp::DzMemberStatus },
        { 0x79d3, CanonicalOp::DzLeaderStatus },
        { 0x5153, CanonicalOp::DzExpeditionEndsWarning },
        { 0x02ac, CanonicalOp::DzExpeditionList },
        { 0x5e14, CanonicalOp::DzMemberList },
        { 0x531d, CanonicalOp::DzCompass },
        { 0x3c5b, CanonicalOp::DzChooseZone },
        { 0x36e3, CanonicalOp::LootRequest },
        { 0x6599, CanonicalOp::EndLootRequest },
        { 0x3760, CanonicalOp::LootItem },
        { 0x48f3, CanonicalOp::LootComplete },
        { 0x14f2, CanonicalOp::BazaarSearch },
        { 0x068d, CanonicalOp::TraderDelItem },
        { 0x32b7, CanonicalOp::BecomeTrader },
        { 0x1acf, CanonicalOp::TraderShop },
        { 0x6b41, CanonicalOp::Trader },
        { 0x7569, CanonicalOp::TraderBuy },
        { 0x51bf, CanonicalOp::Barter },
        { 0x180d, CanonicalOp::TradeRequest },
        { 0x1d07, CanonicalOp::TradeAcceptClick },
        { 0x1255, CanonicalOp::TradeRequestAck },
        { 0x08ca, CanonicalOp::TradeCoins },
        { 0x30b7, CanonicalOp::FinishTrade },
        { 0x7a43, CanonicalOp::CancelTrade },
        { 0x69e7, CanonicalOp::TradeMoneyUpdate },
        { 0x305a, CanonicalOp::MoneyUpdate },
        { 0x5f49, CanonicalOp::TradeBusy },
        { 0x4919, CanonicalOp::FinishWindow },
        { 0x1758, CanonicalOp::FinishWindow2 },
        { 0x0cc2, CanonicalOp::ItemVerifyRequest },
        { 0x41ee, CanonicalOp::ItemVerifyReply },
        { 0x5a58, CanonicalOp::ShopPlayerSell },
        { 0x5fb7, CanonicalOp::ShopRequest },
        { 0x0bd9, CanonicalOp::ShopEnd },
        { 0x475f, CanonicalOp::ShopEndConfirm },
        { 0x09c4, CanonicalOp::ShopPlayerBuy },
        { 0x068d, CanonicalOp::ShopDelItem },
        { 0x21b3, CanonicalOp::ClickObject },
        { 0x67c0, CanonicalOp::ClickObjectAction },
        { 0x0e66, CanonicalOp::ClearObject },
        { 0x0706, CanonicalOp::RecipeDetails },
        { 0x2e2c, CanonicalOp::RecipesFavorite },
        { 0x41a2, CanonicalOp::RecipesSearch },
        { 0x67f5, CanonicalOp::RecipeReply },
        { 0x0427, CanonicalOp::RecipeAutoCombine },
        { 0x163c, CanonicalOp::TradeSkillCombine },
        { 0x3223, CanonicalOp::OpenGuildTributeMaster },
        { 0x5027, CanonicalOp::OpenTributeMaster },
        { 0x1d8c, CanonicalOp::SelectTribute },
        { 0x16d6, CanonicalOp::TributeItem },
        { 0x65bc, CanonicalOp::TributeMoney },
        { 0xe59f, CanonicalOp::TributeToggle },
        { 0x656c, CanonicalOp::TributePointUpdate },
        { 0x1342, CanonicalOp::LeaveAdventure },
        { 0x0974, CanonicalOp::AdventureFinish },
        { 0x6e84, CanonicalOp::AdventureInfoRequest },
        { 0x526d, CanonicalOp::AdventureInfo },
        { 0x4f4c, CanonicalOp::AdventureRequest },
        { 0x7f4d, CanonicalOp::AdventureDetails },
        { 0x10b9, CanonicalOp::AdventureData },
        { 0x53c2, CanonicalOp::AdventureUpdate },
        { 0x71b2, CanonicalOp::AdventureMerchantRequest },
        { 0x40d6, CanonicalOp::AdventureMerchantResponse },
        { 0x5488, CanonicalOp::AdventureMerchantPurchase },
        { 0x1c26, CanonicalOp::AdventureMerchantSell },
        { 0x6583, CanonicalOp::AdventurePointsUpdate },
        { 0x70b2, CanonicalOp::AdventureStatsRequest },
        { 0x5a3a, CanonicalOp::AdventureStatsReply },
        { 0x2a28, CanonicalOp::AdventureLeaderboardRequest },
        { 0x6555, CanonicalOp::AdventureLeaderboardReply },
        { 0x4b26, CanonicalOp::GroupDisband },
        { 0x6321, CanonicalOp::GroupInvite },
        { 0x1a12, CanonicalOp::GroupFollow },
        { 0x2e5c, CanonicalOp::GroupUpdate },
        { 0x596c, CanonicalOp::GroupCancelInvite },
        { 0x1306, CanonicalOp::GroupAcknowledge },
        { 0x596c, CanonicalOp::CancelInvite },
        { 0x59d4, CanonicalOp::GroupFollow2 },
        { 0x07f6, CanonicalOp::GroupInvite2 },
        { 0x9ef3, CanonicalOp::GroupMentor },
        { 0x3547, CanonicalOp::InspectBuffs },
        { 0x5d81, CanonicalOp::LFGCommand },
        { 0x21e0, CanonicalOp::LFGGetMatchesRequest },
        { 0x6dca, CanonicalOp::LFGGetMatchesResponse },
        { 0x601a, CanonicalOp::LFPGetMatchesRequest },
        { 0x2274, CanonicalOp::LFPGetMatchesResponse },
        { 0x1f00, CanonicalOp::LFPCommand },
        { 0x0e11, CanonicalOp::RaidInvite },
        { 0x237e, CanonicalOp::RaidUpdate },
        { 0x094d, CanonicalOp::Taunt },
        { 0x045d, CanonicalOp::CombatAbility },
        { 0x7466, CanonicalOp::SenseTraps },
        { 0x768a, CanonicalOp::PickPocket },
        { 0x19b6, CanonicalOp::Disarm },
        { 0x17c4, CanonicalOp::Sneak },
        { 0x73ab, CanonicalOp::Fishing },
        { 0x6865, CanonicalOp::InstillDoubt },
        { 0x1c68, CanonicalOp::FeignDeath },
        { 0x7767, CanonicalOp::Mend },
        { 0x4b92, CanonicalOp::LDoNOpen },
        { 0x7338, CanonicalOp::TaskActivityComplete },
        { 0x17c3, CanonicalOp::OpenNewTasksWindow },
        { 0x5d1d, CanonicalOp::AvaliableTask },
        { 0x66a8, CanonicalOp::AcceptNewTask },
        { 0x3035, CanonicalOp::TaskHistoryRequest },
        { 0x3a60, CanonicalOp::TaskHistoryReply },
        { 0x4db6, CanonicalOp::CancelTask },
        { 0x3713, CanonicalOp::TaskMemberList },
        { 0x3cde, CanonicalOp::TaskMemberInvite },
        { 0x6cab, CanonicalOp::TaskMemberInviteResponse },
        { 0x354a, CanonicalOp::TaskMemberChange },
        { 0x5050, CanonicalOp::TaskMakeLeader },
        { 0x5d1d, CanonicalOp::TaskAddPlayer },
        { 0x516f, CanonicalOp::TaskRemovePlayer },
        { 0x0ad6, CanonicalOp::TaskPlayerList },
        { 0x2c8c, CanonicalOp::TaskQuit },
        { 0x179c, CanonicalOp::NewTitlesAvailable },
        { 0x3445, CanonicalOp::RequestTitles },
        { 0x3754, CanonicalOp::SendTitleList },
        { 0x54fe, CanonicalOp::SetTitle },
        { 0x690b, CanonicalOp::SetTitleReply },
        { 0x5ecb, CanonicalOp::IncreaseStats },
        { 0x044b, CanonicalOp::VetRewardsAvaliable },
        { 0x7503, CanonicalOp::VetClaimRequest },
        { 0x01e1, CanonicalOp::VetClaimReply },
        { 0x0d1c, CanonicalOp::PlayMP3 },
        { 0x64c1, CanonicalOp::CrystalCountUpdate },
        { 0x65e2, CanonicalOp::CrystalCreate },
        { 0x0730, CanonicalOp::CrystalReclaim },
        { 0x22cf, CanonicalOp::LoginUnknown1 },
        { 0x43ba, CanonicalOp::LoginUnknown2 },
        { 0x4db4, CanonicalOp::ItemViewUnknown },
        { 0x0ada, CanonicalOp::ItemRecastDelay }
    };
}

#endif//_EQP_OPCODES_SOF_HPP_
