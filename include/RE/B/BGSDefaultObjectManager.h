#pragma once

#include "RE/B/BSTSingleton.h"
#include "RE/T/TESForm.h"

namespace RE
{
	struct DEFAULT_OBJECTS
	{
		enum DEFAULT_OBJECT
		{
			kUNUSED01 = 0,
			kSittingAngleLimit = 1,
			kAllowPlayerShout = 2,
			kGold = 3,
			kLockpick = 4,
			kSkeletonKey = 5,
			kPlayerFaction = 6,
			kGuardFaction = 7,
			kBattleMusic = 8,
			kDeathMusic = 9,
			kUNUSED07 = 10,
			kPlayerVoiceMale = 11,
			kPlayerVoiceMaleChild = 12,
			kPlayerVoiceFemale = 13,
			kPlayerVoiceFemaleChild = 14,
			kEatPackageDefaultFood = 15,
			kVoiceEquip = 16,
			kPotionEquip = 17,
			kEveryActorAbility = 18,
			kCommandedActorAbility = 19,
			kDrugWearsOffImageSpace = 20,
			kFootstepSet = 21,
			kLandscapeMaterial = 22,
			kDragonLandZoneMarker = 23,
			kDragonCrashZoneMarker = 24,
			kCombatStyle = 25,
			kDefaultPackList = 26,
			kWaitForDialoguePackage = 27,
			kVirtualLocation = 28,
			kPersistAllLocation = 29,
			kPathingTestNPC = 30,
			kActionSwimStateChange = 31,
			kActionLook = 32,
			kActionLeftAttack = 33,
			kActionLeftReady = 34,
			kActionLeftRelease = 35,
			kActionLeftInterrupt = 36,
			kActionRightAttack = 37,
			kActionRightReady = 38,
			kActionRightRelease = 39,
			kActionRightInterrupt = 40,
			kActionDualAttack = 41,
			kActionDualRelease = 42,
			kActionActivate = 43,
			kActionJump = 44,
			kActionFall = 45,
			kActionLand = 46,
			kActionMantle = 47,
			kActionSneakStart = 48,
			kActionSneakStop = 49,
			kActionArtifactPower = 50,
			kActionArtifactPowerReady = 51,
			kActionArtifactPowerRelease = 52,
			kActionArtifactPowerInterrupt = 53,
			kActionIdle = 54,
			kActionSprintStart = 55,
			kActionSprintStop = 56,
			kActionDraw = 57,
			kActionSheath = 58,
			kActionLeftPowerAttack = 59,
			kActionRightPowerAttack = 60,
			kActionDualPowerAttack = 61,
			kActionLeftSyncAttack = 62,
			kActionRightSyncAttack = 63,
			kActionStaggerStart = 64,
			kActionBlockHit = 65,
			kActionBlockAnticipate = 66,
			kActionRecoil = 67,
			kActionLargeRecoil = 68,
			kActionBleedoutStart = 69,
			kActionBleedoutStop = 70,
			kActionElectromagneticShockedStart = 71,
			kActionElectromagneticShockedStop = 72,
			kActionIdleStop = 73,
			kActionWardHit = 74,
			kActionForceEquip = 75,
			kActionShieldChange = 76,
			kActionPathStart = 77,
			kActionPathEnd = 78,
			kActionLargeMovementDelta = 79,
			kActionFlyStart = 80,
			kActionFlyStop = 81,
			kActionHoverStart = 82,
			kActionHoverStop = 83,
			kActionBumpedInto = 84,
			kActionSummonedStart = 85,
			kActionDialogueTalking = 86,
			kActionDialogueListen = 87,
			kActionDialogueEnter = 88,
			kActionDialogueExit = 89,
			kActionDeath = 90,
			kActionDeathWait = 91,
			kActionMoveStart = 92,
			kActionMoveStop = 93,
			kActionTurnRight = 94,
			kActionTurnLeft = 95,
			kActionTurnStop = 96,
			kActionMoveForward = 97,
			kActionMoveBackward = 98,
			kActionMoveLeft = 99,
			kActionMoveRight = 100,
			kActionKnockdown = 101,
			kActionGetUp = 102,
			kActionGravityOff = 103,
			kActionGravityOn = 104,
			kActionIdleStopInstant = 105,
			kActionRagdollInstant = 106,
			kActionWaterwalkStart = 107,
			kActionReload = 108,
			kActionBoltCharge = 109,
			kActionSighted = 110,
			kActionSightedRelease = 111,
			kActionBlindFireStart = 112,
			kActionBlindFireStop = 113,
			kActionMelee = 114,
			kActionFireSingle = 115,
			kActionFireCharge = 116,
			kActionFireChargeHold = 117,
			kActionFireAuto = 118,
			kActionFireEmpty = 119,
			kActionThrow = 120,
			kActionEnterCover = 121,
			kActionExitCover = 122,
			kActionCoverSprintStart = 123,
			kActionShuffle = 124,
			kActionPipboy = 125,
			kActionPipboyClose = 126,
			kActionPipboyZoom = 127,
			kActionPipboyStats = 128,
			kActionPipboyInventory = 129,
			kActionPipboyData = 130,
			kActionPipboyMap = 131,
			kActionPipboyTab = 132,
			kActionPipboyTabPrevious = 133,
			kActionPipboySelect = 134,
			kActionPipboyRadioOn = 135,
			kActionPipboyRadioOff = 136,
			kActionPipboyInspect = 137,
			kActionNonSupportContact = 138,
			kActionInteractionEnter = 139,
			kActionInteractionExit = 140,
			kActionInteractionExitAlternate = 141,
			kActionInteractionExitQuick = 142,
			kActionIntimidate = 143,
			kActionGunChargeStart = 144,
			kActionGunDown = 145,
			kActionGunRelaxed = 146,
			kActionGunAlert = 147,
			kActionGunReady = 148,
			kActionFlipThrow = 149,
			kActionEnterCombat = 150,
			kActionExitCombat = 151,
			kActionLimbCritical = 152,
			kActionEvade = 153,
			kActionDodge = 154,
			kActionAvoid = 155,
			kActionAoEAttack = 156,
			kActionCower = 157,
			kActionTunnel = 158,
			kActionFleeStart = 159,
			kActionHide = 160,
			kActionTaunt = 161,
			kActionTraversalStart = 162,
			kActionTraversalEnd = 163,
			kActionFlightTakeoff = 164,
			kActionFlightLanding = 165,
			kActionStepInTalkingToPlayer = 166,
			kActionThreatAssess = 167,
			kActionThreatBackDown = 168,
			kActionThreatCurious = 169,
			kActionThreatIntimidate = 170,
			kActionThreatListenBack = 171,
			kActionThreatListenFront = 172,
			kImagespaceLowHealth = 173,
			kKeywordHorse = 174,
			kKeywordUndead = 175,
			kKeywordNPC = 176,
			kUNUSED02 = 177,
			kKeywordDummyObject = 178,
			kKeywordUseGeometryEmitter = 179,
			kKeywordMustStop = 180,
			kMaleFaceTextureSetHead = 181,
			kMaleFaceTextureSetMouth = 182,
			kMaleFaceTextureSetEyes = 183,
			kFemaleFaceTextureSetHead = 184,
			kFemaleFaceTextureSetMouth = 185,
			kFemaleFaceTextureSetEyes = 186,
			kImageSpaceModifierForInventoryMenu = 187,
			kImageSpaceModifierForPipboyMenuInPowerArmor = 188,
			kPackageTemplate = 189,
			kMainMenuCell = 190,
			kDefaultMovementTypeDefault = 191,
			kDefaultMovementTypeSwim = 192,
			kDefaultMovementTypeFly = 193,
			kDefaultMovementTypeSneak = 194,
			kKeywordSpecialFurniture = 195,
			kKeywordFurnitureForces1stPerson = 196,
			kKeywordFurnitureForces3rdPerson = 197,
			kKeywordActivatorFurnitureNoPlayer = 198,
			kWorldMapWeather = 199,
			kKeywordTypeAmmo = 200,
			kKeywordTypeArmor = 201,
			kKeywordTypeBook = 202,
			kKeywordTypeIngredient = 203,
			kKeywordTypeKey = 204,
			kKeywordTypeMisc = 205,
			kKeywordTypeSoulGem = 206,
			kKeywordTypeWeapon = 207,
			kKeywordTypePotion = 208,
			kBaseWeaponEnchantment = 209,
			kBaseArmorEnchantment = 210,
			kBasePotion = 211,
			kBasePoison = 212,
			kKeywordDragon = 213,
			kKeywordMovable = 214,
			kArtObjectAbsorbEffect = 215,
			kWeaponMaterialList = 216,
			kArmorMaterialList = 217,
			kKeywordDisallowEnchanting = 218,
			kFavorTravelMarkerLocation = 219,
			kTeammateReadyWeapon = 220,
			kKeywordHoldLocation = 221,
			kKeywordCivilWarOwner = 222,
			kKeywordCivilWarNeutral = 223,
			kLocRefTypeCivilWarSoldier = 224,
			kUNUSED06 = 225,
			kLocRefTypeResourceDestructible = 226,
			kFormListHairColorList = 227,
			kComplexSceneObject = 228,
			kKeywordReusableSoulGem = 229,
			kKeywordAnimal = 230,
			kKeywordDaedra = 231,
			kKeywordRobot = 232,
			kKeywordNirnroot = 233,
			kFightersGuildFaction = 234,
			kMagesGuildFaction = 235,
			kThievesGuildFaction = 236,
			kDarkBrotherhoodFaction = 237,
			kJarlFaction = 238,
			kBunnyFaction = 239,
			kPlayerIsVampireVariable = 240,
			kUNUSED03 = 241,
			kRoadMarker = 242,
			kKeywordScaleActorTo10 = 243,
			kKeywordVampire = 244,
			kKeywordForge = 245,
			kKeywordCookingPot = 246,
			kKeywordSmelter = 247,
			kKeywordTanningRack = 248,
			kHelpBasicLockpickingPC = 249,
			kHelpBasicLockpickingConsole = 250,
			kHelpBasicForging = 251,
			kHelpBasicCooking = 252,
			kHelpBasicSmelting = 253,
			kHelpBasicTanning = 254,
			kHelpBasicObjectCreation = 255,
			kHelpBasicEnchanting = 256,
			kHelpBasicSmithingWeapon = 257,
			kHelpBasicSmithingArmor = 258,
			kHelpBasicAlchemy = 259,
			kHelpBarter = 260,
			kHelpLevelingUp = 261,
			kHelpSkillsMenu = 262,
			kHelpMapMenu = 263,
			kHelpJournal = 264,
			kHelpLowHealth = 265,
			kHelpLowMagicka = 266,
			kHelpLowStamina = 267,
			kHelpJail = 268,
			kHelpTeamateFavor = 269,
			kHelpWeaponCharge = 270,
			kHelpFavorites = 271,
			kKinectHelpFormList = 272,
			kImagespaceLoadScreen = 273,
			kKeywordWeaponMaterialDaedric = 274,
			kKeywordWeaponMaterialDraugr = 275,
			kKeywordWeaponMaterialDraugrHoned = 276,
			kKeywordWeaponMaterialDwarven = 277,
			kKeywordWeaponMaterialEbony = 278,
			kKeywordWeaponMaterialElven = 279,
			kKeywordWeaponMaterialFalmer = 280,
			kKeywordWeaponMaterialFalmerHoned = 281,
			kKeywordWeaponMaterialGlass = 282,
			kKeywordWeaponMaterialImperial = 283,
			kKeywordWeaponMaterialIron = 284,
			kKeywordWeaponMaterialOrcish = 285,
			kKeywordWeaponMaterialSteel = 286,
			kKeywordWeaponMaterialWood = 287,
			kKeywordWeaponTypeBoundArrow = 288,
			kKeywordArmorMaterialDaedric = 289,
			kKeywordArmorMaterialDragonplate = 290,
			kKeywordArmorMaterialDragonscale = 291,
			kKeywordArmorMaterialDragonbone = 292,
			kKeywordArmorMaterialDwarven = 293,
			kKeywordArmorMaterialEbony = 294,
			kKeywordArmorMaterialElven = 295,
			kKeywordArmorMaterialElvenSplinted = 296,
			kKeywordArmorMaterialFullLeather = 297,
			kKeywordArmorMaterialGlass = 298,
			kKeywordArmorMaterialHide = 299,
			kKeywordArmorMaterialImperial = 300,
			kKeywordArmorMaterialImperialHeavy = 301,
			kKeywordArmorMaterialImperialReinforced = 302,
			kKeywordArmorMaterialIron = 303,
			kKeywordArmorMaterialIronBanded = 304,
			kKeywordArmorMaterialOrcish = 305,
			kKeywordArmorMaterialScaled = 306,
			kKeywordArmorMaterialSteel = 307,
			kKeywordArmorMaterialSteelPlate = 308,
			kKeywordArmorMaterialStormcloak = 309,
			kKeywordArmorMaterialStudded = 310,
			kKeywordGenericCraftableKeyword01 = 311,
			kKeywordGenericCraftableKeyword02 = 312,
			kKeywordGenericCraftableKeyword03 = 313,
			kKeywordGenericCraftableKeyword04 = 314,
			kKeywordGenericCraftableKeyword05 = 315,
			kKeywordGenericCraftableKeyword06 = 316,
			kKeywordGenericCraftableKeyword07 = 317,
			kKeywordGenericCraftableKeyword08 = 318,
			kKeywordGenericCraftableKeyword09 = 319,
			kKeywordGenericCraftableKeyword10 = 320,
			kKeywordNullptrMOD = 321,
			kKeywordJewelry = 322,
			kKeywordCuirass = 323,
			kLocalMapHidePlane = 324,
			kSnowLODMaterial = 325,
			kSnowLODMaterialHD = 326,
			kDialogueImagespace = 327,
			kDialogueFollowerQuest = 328,
			kPotentialFollowerFaction = 329,
			kUnused330 = 330,
			kVampireAvailablePerks = 331,
			kUnused332 = 332,
			kVampireRace = 333,
			kVampireSpells = 334,
			kKeywordMount = 335,
			kVerletCape = 336,
			kFurnitureTestNPC = 337,
			kKeywordConditionalExplosion = 338,
			kDefaultLight1 = 339,
			kDefaultLight2 = 340,
			kDefaultLight3 = 341,
			kDefaultLight4 = 342,
			kPipboyLight = 343,
			kActionBeginLoopingActivate = 344,
			kActionEndLoopingActivate = 345,
			kWorkshopPlayerOwnership = 346,
			kQuestMarkerFollower = 347,
			kQuestMarkerLocation = 348,
			kQuestMarkerEnemy = 349,
			kQuestMarkerEnemyAbove = 350,
			kQuestMarkerEnemyBelow = 351,
			kWorkshopMiscItemKeyword = 352,
			kHeavyWeaponItemKeyword = 353,
			kMineItemKeyword = 354,
			kGrenadeItemKeyword = 355,
			kChemItemKeyword = 356,
			kAlcoholItemKeyword = 357,
			kFoodItemKeyword = 358,
			kRepairKitItemKeyword = 359,
			kMedBagItemKeyword = 360,
			kGlovesItemKeyword = 361,
			kHelmetItemKeyword = 362,
			kClothesItemKeyword = 363,

			kTotal = 364
		};
	};
	using DEFAULT_OBJECT = DEFAULT_OBJECTS::DEFAULT_OBJECT;

	enum class DEFAULT_OBJECT_TYPE
	{
		kMisc,
		kFacegen,
		kMovement,
		kActions,
		kItems,
		kSounds,
		kKeywords
	};

	struct DEFAULT_OBJECT_DATA
	{
	public:
		// members
		const char*                                   name;           // 00
		REX::Enum<FormType, std::uint8_t>             type;           // 08
		char                                          uniqueID[4];    // 0C
		REX::Enum<DEFAULT_OBJECT_TYPE, std::uint32_t> doType;         // 10
		const char*                                   newObjectName;  // 18
	};
	static_assert(sizeof(DEFAULT_OBJECT_DATA) == 0x20);

	class BGSDefaultObjectManager :
		public TESForm,                                       // 00
		public BSTSingletonImplicit<BGSDefaultObjectManager>  // 30
	{
	public:
		SF_RTTI_VTABLE(BGSDefaultObjectManager);
		SF_FORMTYPE(DOBJ);

		~BGSDefaultObjectManager() override;  // 00

		[[nodiscard]] static BGSDefaultObjectManager* GetSingleton()
		{
			using func_t = decltype(&BGSDefaultObjectManager::GetSingleton);
			static REL::Relocation<func_t> func{ ID::BGSDefaultObjectManager::GetSingleton };
			return func();
		}

		[[nodiscard]] static std::span<DEFAULT_OBJECT_DATA, DEFAULT_OBJECT::kTotal> GetDefaultObjectData()
		{
			static REL::Relocation<DEFAULT_OBJECT_DATA(*)[DEFAULT_OBJECT::kTotal]> data{ ID::BGSDefaultObjectManager::DefaultObjectData };
			return { *data };
		}

		[[nodiscard]] TESForm* GetDefaultObject(DEFAULT_OBJECT a_obj) const noexcept
		{
			assert(a_obj < DEFAULT_OBJECT::kTotal);
			return objectArray[std::to_underlying(a_obj)];
		}

		template <class T>
		[[nodiscard]] T* GetDefaultObject(DEFAULT_OBJECT a_obj) const
			requires(std::derived_from<T, TESForm> &&
					 !std::is_pointer_v<T> &&
					 !std::is_reference_v<T>)
		{
			const auto obj = GetDefaultObject(a_obj);
			return obj ? obj->As<T>() : nullptr;
		}

		// members
		TESForm* objectArray[DEFAULT_OBJECTS::kTotal];  // 030
	};
	static_assert(sizeof(BGSDefaultObjectManager) == 0xB98);
}