/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 650, 325, "" },
            { "hgun_Pistol_01_F", "", 700, 350, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 985, 4925, "" },
            { "hgun_ACPC2_F", "", 1150, 575, "" },
            { "SMG_05_F", "", 1800, 900, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 2000, 1000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 15, 10, "" },
            { "6Rnd_45ACP_Cylinder", "", 15, 10, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 25, 15, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 25, 15, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 25, 15, "" } //Apex DLC
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 100, 50, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 250, 125, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {

                
            { "B_Patrol_Soldier_MachineGunner_weapon_F", "", 2500, 1250, "" },
            { "arifle_TRG20_F", "", 2500, 1250, "" },
            { "arifle_Katiba_F", "", 3000, 1500, "" },
            { "arifle_SDAR_F", "", 2000, 1000, "" },

            { "srifle_DMR_01_F", "", 5000, 2500, "" },
            { "srifle_DMR_03_F", "", 5000, 2500, "" },
            { "srifle_EBR_F", "", 5000, 1000, "" },

         //   { "arifle_AK12_F", "", 2200, 1100, "" }, //Apex DLC
         //   { "arifle_AKS_F", "", 2200, 1100, "" }, //Apex DLC
         //   { "arifle_AKM_F", "", 2200, 1100, "" }, //Apex DLC
         //   { "arifle_ARX_blk_F", "", 2200, 1100, "" }, //Apex DLC
         //   { "arifle_SPAR_01_blk_F", "", 3300, 1650, "" }, //Apex DLC
         //   { "arifle_CTAR_blk_F", "", 3000, 1500, "" }, //Apex DLC
            { "launch_NLAW_F", "", 250000, 50000, "" }, //BAZOOKA
            { "launch_O_Titan_F", "", 500000, 50000, "" }, //Anti-Air LAUNCHER

            { "NVGoggles", "", 200, 100, "" },
            { "Rangefinder", "", 200, 100, "" }

        };
        mags[] = {
            { "200Rnd_65x39_cased_Box_Tracer_Red", "", 300, 150, "" },
            { "30Rnd_556x45_Stanag", "", 30, 15, "" },
         //   { "30Rnd_762x39_Mag_F", "", 30, 15, "" }, //Apex DLC
        //   { "30Rnd_545x39_Mag_F", "", 30, 15, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 25, 10, "" },
            { "10Rnd_762x54_Mag", "", 50, 25, "" },
            { "20Rnd_556x45_UW_mag", "", 15, 10, "" },
         //   { "30Rnd_580x42_Mag_F", "", 15, 10, "" }, //Apex DLC
            { "NLAW_F", "", 1500, 10, "" }, //bazooka ammo
            { "Titan_AA", "", 5000, 10, "" }, //Anti-Air LAUNCHER ammo

            

            
            { "10Rnd_762x54_Mag", "", 15, 10, "" },
            { "20Rnd_762x51_Mag", "", 15, 10, "" },

            

            
           
        };
        accs[] = {
            { "optic_ACO_grn", "", 350, 170, "" },
            { "optic_Holosight", "", 360, 180, "" },
            { "optic_Hamr", "", 750, 375, "" },
            { "optic_Nightstalker", "", 30000, 50, "" },
            { "optic_SOS", "", 100, 50, "" },
            { "optic_LRPS", "", 100, 50, "" },
            { "optic_AMS_khk", "", 100, 50, "" },
            { "optic_ams", "", 100, 50, "" },





            { "acc_flashlight", "", 100, 50, "" },
            { "acc_pointer_IR", "", 350, 170, "" },

            { "bipod_01_F_khk", "", 100, 50, "" },
            { "bipod_03_F_blk", "", 100, 50, "" },
            { "muzzle_snds_B", "", 100, 50, "" },
            { "muzzle_snds_h", "", 100, 50, "" }





        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 150, 75, "" },
            { "hgun_Pistol_heavy_02_F", "", 200, 120, "" },
            { "hgun_ACPC2_F", "", 450, 225, "" },
            { "hgun_PDW2000_F", "", 950, 475, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 15, 6, "" },
            { "6Rnd_45ACP_Cylinder", "", 15, 5, "" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "" },
            { "30Rnd_9x21_Mag", "", 25, 15, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 50, 25, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 90, 45, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 15, 5, "" },
            { "ItemGPS", "", 10, 5, "" },
            { "ItemMap", "", 5, 5, "" },
            { "ItemCompass", "", 5, 5, "" },
            { "ItemWatch", "", 5, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 200, 100, "" },
            { "Chemlight_red", "", 30, 15, "" },
            { "Chemlight_yellow", "", 30, 15, "" },
            { "Chemlight_green", "", 30, 15, "" },
            { "Chemlight_blue", "", 30, 10, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 15, 5, "" },
            { "ItemGPS", "", 10, 5, "" },
            { "ItemMap", "", 5, 5, "" },
            { "ItemCompass", "", 5, 5, "" },
            { "ItemWatch", "", 5, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 200, 100, "" },
            { "Chemlight_red", "", 30, 15, "" },
            { "Chemlight_yellow", "", 30, 15, "" },
            { "Chemlight_green", "", 30, 15, "" },
            { "Chemlight_blue", "", 30, 10, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 15, 5, "" },
            { "ItemGPS", "", 10, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 200, 100, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 170, 85, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 200, 100, "" },
            { "arifle_SDAR_F", $STR_W_items_TaserRifle, 2000, 1000, "" },
            { "hgun_P07_F", "", 750, 375, "" },
            { "hgun_P07_khk_F", "", 750, 375, "" }, //Apex DLC
            { "hgun_Pistol_heavy_01_F", "", 950, 475, "call life_coplevel >= 1" },
            { "SMG_02_ACO_F", "", 3000, 1500, "call life_coplevel >= 2" },
            { "arifle_MX_F", "", 3500, 1750, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 1750, 875, "call life_coplevel >= 3" },
            { "arifle_MXC_F", "", 3000, 1500, "call life_coplevel >= 3" },
            { "srifle_DMR_07_blk_F", "", 3200, 1600, "call life_coplevel >= 3" }, //Apex DLC Sniper
            { "srifle_LRR_F", "", 150000, 16000, "call life_coplevel >= 3" },
            { "launch_O_Titan_F", "", 500000, 50000, "" }, //Anti-Air LAUNCHER
            { "Rangefinder", "", 200, 100, "" } 



            // { "B_UavTerminal", "", 200, 200, "call life_coplevel >= 0" },
            // { "O_UavTerminal", "", 200, 200, "call life_coplevel >= 0" },
            // { "I_UavTerminal", "", 200, 200, "call life_coplevel >= 0" }


        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 15, 10, "" },
            { "20Rnd_556x45_UW_mag", $STR_W_mags_TaserRifle, 15, 10, "" },
            { "11Rnd_45ACP_Mag", "", 10, 5, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 10, 5, "call life_coplevel >= 2" },
            { "30Rnd_9x21_Mag", "", 25, 15, "call life_coplevel >= 2" },
            { "9Rnd_45ACP_Mag", "", 20, 10, "call life_coplevel >= 3" },
            { "20Rnd_650x39_Cased_Mag_F", "", 20, 10, "call life_coplevel >= 3" }, //Apex DLC
            { "7Rnd_408_Mag", "", 2000, 100, "call life_coplevel >= 3" },
            { "Titan_AA", "", 5000, 10, "" } //Anti-Air LAUNCHER ammo

            
        };
        accs[] = {
            { "muzzle_snds_L", "", 65, 35, "" },
            { "optic_MRD", "", 275, 135, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 20, 15, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 75, 35, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 120, 60, "call life_coplevel >= 2" },
            { "optic_Arco", "", 250, 125, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 275, 135, "call life_coplevel >= 2" },
            { "optic_LRPS", "", 1500, 135, "call life_coplevel >= 2" },
            { "optic_KHS_blk", "", 1200, 135, "call life_coplevel >= 2" },
            { "optic_DMS", "", 1000, 135, "call life_coplevel >= 2" },
            { "optic_AMS_khk", "", 1000, 135, "call life_coplevel >= 2" },
            { "optic_Nightstalker", "", 1000, 135, "call life_coplevel >= 2" },
            { "optic_tws", "", 1000, 135, "call life_coplevel >= 2" }


        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 10, 5, "" },
            { "Binocular", "", 15, 5, "" },
            { "FirstAidKit", "", 15, 5, "" },
            { "NVGoggles", "", 120, 60, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
