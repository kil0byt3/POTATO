class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class CfgWeapons {
    class Rifle_Long_Base_F;
    class Pistol_Base_F;
    class Rifle_Base_F;
    class Rifle_Short_Base_F;
    class PKT;
    class MGun;
    class CannonCore;
    class DMR_01_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class EBR_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class FullAuto: Mode_FullAuto {

        };
        class fullauto_medium: FullAuto {

        };
    };
    class GM6_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class LRR_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class LMG_Mk200_F: Rifle_Long_Base_F {
        modes[] = {"manual","Single","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: manual {
            showToPlayer = 1;
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
        class ACE_Burst_far: medium {
            aiRateOfFire = 6;
            aiRateOfFireDistance = 900;
            minRange = 500;
            minRangeProbab = 0.1;
            midRange = 700;
            midRangeProbab = 0.2;
            maxRange = 900;
            maxRangeProbab = 0.2;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
    };
    class LMG_Zafir_F: Rifle_Long_Base_F {
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
            minRange = 120;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
        class ACE_Burst_far: medium {
            aiRateOfFire = 6;
            aiRateOfFireDistance = 900;
            minRange = 500;
            minRangeProbab = 0.1;
            midRange = 700;
            midRangeProbab = 0.2;
            maxRange = 900;
            maxRangeProbab = 0.2;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
    };
    class hgun_ACPC2_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class hgun_P07_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class hgun_Pistol_heavy_01_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class hgun_Pistol_heavy_02_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class hgun_Rook40_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class arifle_Katiba_Base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            maxRange = 400;
            maxRangeProbab = 0.3;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.5;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            burst = "3 + round random 5";
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class arifle_Katiba_C_F: arifle_Katiba_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};
        class Single: Single {
            maxRange = 350;
            maxRangeProbab = 0.2;
            minRange = 120;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class fullauto_medium: fullauto_medium {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 300;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.2;
            maxRange = 500;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class mk20_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            maxRange = 300;
            maxRangeProbab = 0.2;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 250;
            midRangeProbab = 0.5;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            minRange = 0;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class arifle_Mk20C_F: mk20_base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Single {
            maxRangeProbab = 0.3;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 250;
            midRangeProbab = 0.5;
            maxRange = 350;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            minRange = 0;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: fullauto_medium {
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
            minRange = 20;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 300;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.2;
            maxRange = 500;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_Mk20_GL_F: mk20_base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: fullauto_medium {
            minRange = 2;
            minRangeProbab = 0.2;
            midRange = 450;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFire = 6;
            aiRateOfFireDistance = 600;
            showToPlayer = 0;
            burst = "3 + round random 5";
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_MX_Base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            maxRange = 400;
            maxRangeProbab = 0.3;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.5;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            burst = "3 + round random 5";
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class arifle_MXC_F: arifle_MX_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Single {
            maxRange = 350;
            maxRangeProbab = 0.1;
            minRange = 120;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: fullauto_medium {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            burst = "3 + round random 5";
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 300;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.2;
            maxRange = 500;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_MX_SW_F: arifle_MX_Base_F {
        modes[] = {"Single","manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            minRange = 120;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {

        };
        class manual: FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
        class ACE_Burst_far: medium {
            aiRateOfFire = 6;
            aiRateOfFireDistance = 900;
            minRange = 500;
            minRangeProbab = 0.1;
            midRange = 700;
            midRangeProbab = 0.2;
            maxRange = 900;
            maxRangeProbab = 0.2;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
    };
    class arifle_MXM_F: arifle_MX_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
        class Single: Single {
            maxRange = 450;
            maxRangeProbab = 0.3;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 350;
            midRangeProbab = 0.5;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: fullauto_medium {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 20;
            burst = "3 + round random 5";
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class single_far_optics2: single_far_optics2 {

        };
    };
    class SDAR_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.3;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 35;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 20;
            minRange = 10;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 5;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {

        };
    };
    class Tavor_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            maxRangeProbab = 0.2;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 250;
            midRangeProbab = 0.5;
            maxRange = 350;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            minRange = 0;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
            aiRateOfFireDistance = 500;
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 300;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.2;
            maxRange = 500;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class arifle_TRG21_F: Tavor_base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium","ACE_Burst_far"};
        class Single: Single {
            maxRangeProbab = 0.3;
            minRange = 120;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.5;
            maxRange = 400;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            minRange = 0;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: single_medium_optics1 {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: fullauto_medium {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
            aiRateOfFireDistance = 500;
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 300;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.2;
            maxRange = 500;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class pdw2000_base_F: Rifle_Short_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 100;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {

        };
    };
    class SMG_01_Base: Rifle_Short_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            minRangeProbab = 0.3;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            minRange = 25;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class SMG_02_base_F: Rifle_Short_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            minRangeProbab = 0.3;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            minRange = 25;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class hgun_Pistol_Signal_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class CUP_hgun_Compact: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_CZ750_Base: Rifle_Long_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_hgun_Duty: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_G3_Base: Rifle_Base_F {
        modes[] = {"Single","Fullauto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 600;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: Single {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            burst = 1;
        };
    };
    class CUP_srifle_CZ550_base: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_LeeEnfield: Rifle_Long_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_M14_DMR: Rifle_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class CUP_srifle_M24_des: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_M40A3: CUP_srifle_M24_des {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_Phantom: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class DMR_02_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class DMR_03_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            midRange = 350;
            maxRange = 500;
            maxRangeProbab = 0.05;
            minRange = 120;
            minRangeProbab = 0.7;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
            aiRateOfFireDistance = 500;
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class DMR_04_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class DMR_05_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            midRange = 350;
            maxRange = 500;
            maxRangeProbab = 0.05;
            minRange = 120;
            minRangeProbab = 0.7;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
            aiRateOfFireDistance = 500;
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class DMR_06_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
        class Single: Mode_SemiAuto {
            midRange = 350;
            maxRange = 500;
            maxRangeProbab = 0.05;
            minRange = 120;
            minRangeProbab = 0.7;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            minRange = 20;
            maxRange = 150;
            burst = "3 + round random 5";
            aiRateOfFireDistance = 500;
        };
        class ACE_Burst_far: fullauto_medium {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 500;
            midRangeProbab = 0.2;
            maxRange = 600;
            maxRangeProbab = 0.2;
            burst = "2 + round random 3";
            showToPlayer = 0;
        };
    };
    class MMG_01_base_F: Rifle_Long_Base_F {
        modes[] = {"manual","burst","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
        class manual: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 30;
            midRangeProbab = 0.58;
            maxRange = 80;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class burst: Mode_Burst {
            minRange = 10;
            minRangeProbab = 0.3;
            midRange = 60;
            midRangeProbab = 0.58;
            maxRange = 150;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: Burst {
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.6;
            maxRange = 800;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
        class ACE_Burst_far: medium {
            aiRateOfFire = 6;
            aiRateOfFireDistance = 900;
            minRange = 700;
            minRangeProbab = 0.1;
            midRange = 900;
            midRangeProbab = 0.2;
            maxRange = 1100;
            maxRangeProbab = 0.2;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
    };
    class MMG_02_base_F: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
        class manual: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 30;
            midRangeProbab = 0.58;
            maxRange = 80;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.6;
            maxRange = 800;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
        class ACE_Burst_far: medium {
            aiRateOfFire = 6;
            aiRateOfFireDistance = 900;
            minRange = 700;
            minRangeProbab = 0.1;
            midRange = 900;
            midRangeProbab = 0.2;
            maxRange = 1100;
            maxRangeProbab = 0.2;
            burst = "3 + round random 5";
            showToPlayer = 0;
        };
    };
    class CUP_sgun_AA12: Rifle_Base_F {
        modes[] = {"FullAuto"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.6;
            midRange = 40;
            midRangeProbab = 0.15;
            maxRange = 70;
            maxRangeProbab = 0.02;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {

        };
    };
    class SMG_03_TR_BASE: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 0;
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
        };
        class FullAuto: Mode_FullAuto {

        };
    };
    class SMG_03C_BASE: SMG_03_TR_BASE {
        modes[] = {"Single","FullAuto"};
        class Single: Single {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 0;
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.08;
            aiRateOfFireDistance = 0;
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 30;
            midRangeProbab = 0.58;
            maxRange = 80;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
    };
    class DMR_07_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class LMG_03_base_F: Rifle_Long_Base_F {
        modes[] = {"FullAutoFast","FullAutoSlow","close","short","medium","far_optic1","far_optic2"};
        class FullAutoSlow: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAutoFast: FullAutoSlow {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAutoFast {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: FullAutoSlow {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
    };
    class hgun_Pistol_01_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 30;
            midRangeProbab = 0.6;
            maxRange = 60;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 30;
            showToPlayer = 1;
        };
    };
    class arifle_AK12_base_F: Rifle_Base_F {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_AKM_base_F: Rifle_Base_F {
        modes[] = {"FullAuto","Single","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class arifle_AKS_base_F: Rifle_Base_F {
        modes[] = {"FullAuto","Single","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 75;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class arifle_ARX_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class arifle_CTAR_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 175;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 60;
            midRangeProbab = 0.7;
            maxRange = 120;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 120;
        };
    };
    class arifle_CTARS_base_F: Rifle_Base_F {
        modes[] = {"FullAuto","Single","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 150;
        };
    };
    class arifle_SPAR_01_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class arifle_SPAR_02_base_F: Rifle_Base_F {
        modes[] = {"FullAuto","Single","single_medium_optics1","single_medium_optics2","fullauto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class arifle_SPAR_03_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class SMG_05_base_F: Rifle_Short_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 80;
            midRangeProbab = 0.7;
            maxRange = 120;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 12;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F {
        modes[] = {"Single","Single_close","Single_far"};
        class Single: Mode_SemiAuto {
            minRange = 1;
            minRangeProbab = 0.1;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.15;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;
            showToPlayer = 1;
        };
        class Single_close: Single {
            showToPlayer = 0;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 170;
            midRangeProbab = 0.8;
            maxRange = 250;
            maxRangeProbab = 0.15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            burst = 1;
        };
        class Single_far: Single_Close {
            minRange = 220;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.15;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            showToPlayer = 0;
            burst = 1;
        };
    };
    class sgun_HunterShotgun_01_sawedoff_base_F: sgun_HunterShotgun_01_base_F {
        modes[] = {"Single","Single_close","Single_far"};
        class Single: Single {
            minRange = 1;
            minRangeProbab = 0.1;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.15;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;
            showToPlayer = 1;
        };
        class Single_close: Single {
            showToPlayer = 0;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 140;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.15;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            burst = 1;
        };
        class Single_far: Single_Close {
            minRange = 180;
            minRangeProbab = 0.1;
            midRange = 230;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.15;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            showToPlayer = 0;
            burst = 1;
        };
    };
    class arifle_MSBS65_base_F: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class DMR_06_hunter_base_F: DMR_06_base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Single {
            midRange = 350;
            maxRange = 500;
            maxRangeProbab = 0.05;
            minRange = 120;
            minRangeProbab = 0.7;
            midRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class hgun_esd_01_base_F: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class arifle_AK12U_base_F: arifle_AK12_base_F {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_RPK12_base_F: arifle_AK12_base_F {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 175;
            midRangeProbab = 0.75;
            maxRange = 300;
            maxRangeProbab = 0.25;
            aiRateOfFire = 2;
            burst = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_pkt: PKT {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 12;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: close {
            burst = 6;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 850;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_pktm: rhs_weap_pkt {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
    };
    class LMG_RCWS: MGun {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.8;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.2;
        };
        class short: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 250;
            minRange = 150;
            minRangeProbab = 0.7;
            midRange = 600;
            midRangeProbab = 0.65;
            maxRange = 800;
            maxRangeProbab = 0.1;
        };
        class far: close {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1200;
            maxRangeProbab = 0.1;
        };
    };
    class rhs_weap_DSHKM: LMG_RCWS {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 6;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_nsvt: rhs_weap_DSHKM {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 8;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_nsvt_effects: rhs_weap_nsvt {
        modes[] = {"manual","close","short","medium","far"};
    };
    class rhs_weap_kord: rhs_weap_nsvt_effects {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 100;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 9;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 8;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.58;
            maxRange = 800;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_kpvt: MGun {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 100;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 6;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.58;
            maxRange = 1000;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 4;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 800;
            minRangeProbab = 0.05;
            midRange = 1000;
            midRangeProbab = 0.58;
            maxRange = 1200;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.05;
            midRange = 1200;
            midRangeProbab = 0.4;
            maxRange = 1500;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_pkm_tigr: rhs_weap_pkt {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 12;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
        };
        class short: close {
            burst = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: close {
            burst = 6;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 850;
            midRangeProbab = 0.4;
            maxRange = 1100;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_azp23: CannonCore {
        modes[] = {"manual","close","short","medium","far"};
        class manual: CannonCore {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 10;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 1000;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 1000;
            midRangeProbab = 0.58;
            maxRange = 1600;
            maxRangeProbab = 0.3;
        };
        class short: close {
            burst = 10;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 1600;
            minRange = 1000;
            minRangeProbab = 0.3;
            midRange = 1600;
            midRangeProbab = 0.58;
            maxRange = 2200;
            maxRangeProbab = 0.3;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 15;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 2200;
            minRange = 1600;
            minRangeProbab = 0.3;
            midRange = 2000;
            midRangeProbab = 0.58;
            maxRange = 2800;
            maxRangeProbab = 0.3;
            showToPlayer = 0;
        };
        class far: close {
            burst = 9;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 3000;
            minRange = 1600;
            minRangeProbab = 0.3;
            midRange = 2200;
            midRangeProbab = 0.4;
            maxRange = 8500;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_2a14: rhs_weap_azp23 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            showToPlayer = 1;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 1;
            minRangeProbab = 0.01;
            midRange = 2;
            midRangeProbab = 0.01;
            maxRange = 3;
            maxRangeProbab = 0.01;
        };
    };
    class RHS_SAFE_BASE: Rifle_Base_F {
        modes[] = {"Safe"};
        class Safe: Mode_SemiAuto {
            showToPlayer = 0;
            minRange = 0;
            minRangeProbab = 0.001;
            midRange = 0.001;
            midRangeProbab = 0.001;
            maxRange = 0.001;
            maxRangeProbab = 0.001;
            burst = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class RHS_FOLD_BASE: Rifle_Base_F {
        modes[] = {"Safe"};
        class Safe: Mode_SemiAuto {
            showToPlayer = 0;
            minRange = 0;
            minRangeProbab = 0.001;
            midRange = 0.001;
            midRangeProbab = 0.001;
            maxRange = 0.001;
            maxRangeProbab = 0.001;
            burst = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_ak74m_Base_F: Rifle_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_ak74m: rhs_weap_ak74m_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
    };
    class rhs_weap_akm: rhs_weap_ak74m {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_ak103_base: rhs_weap_akm {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class Burst: Mode_Burst {

        };
    };
    class rhs_weap_ak103_1: rhs_weap_ak103_base {
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class rhs_weap_ak103_2: rhs_weap_ak103_base {
        modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class rhs_weap_ak74: rhs_weap_ak74m {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
    };
    class rhs_weap_aks74: rhs_weap_ak74 {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
    };
    class rhs_weap_aks74u: rhs_weap_aks74 {
        modes[] = {"FullAuto","Single","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_asval: rhs_weap_ak74m {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 420;
            maxRangeProbab = 0.45;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 400;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 35;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: Single {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 75;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 75;
        };
    };
    class rhs_weap_vss: rhs_weap_asval {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 420;
            maxRangeProbab = 0.45;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 400;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 35;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_svd: rhs_weap_ak74m {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class rhs_weap_svdp: rhs_weap_svd {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class rhs_weap_orsis_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class hgun_PDW2000_F: pdw2000_base_F {
        modes[] = {"Single","FullAuto"};
    };
    class rhs_weap_pp2000: hgun_PDW2000_F {
        modes[] = {"Single","FullAuto"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class rhs_pkp_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.01;
            midRange = 200;
            midRangeProbab = 0.01;
            maxRange = 400;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
            burst = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 4;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_pkp: rhs_pkp_base {
        modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
    };
    class rhs_weap_pkm: rhs_weap_pkp {
        modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
        class manual: FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 6;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_rpk74: rhs_weap_pkp {
        modes[] = {"single","manual","close","short","medium","far_optic1","far_optic2"};
        class single: Mode_SemiAuto {
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 0;
            midRangeProbab = 0.01;
            maxRange = 0;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: Manual {
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
    };
    class HMG_127: LMG_RCWS {
        modes[] = {"manual","close","short","medium","far"};
        class manual: MGun {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 400;
            midRangeProbab = 0.75;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 400;
            minRangeProbab = 0.75;
            midRange = 800;
            midRangeProbab = 0.7;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class far: close {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 800;
            minRange = 800;
            minRangeProbab = 0.6;
            midRange = 1500;
            midRangeProbab = 0.25;
            maxRange = 2000;
            maxRangeProbab = 0.05;
        };
    };
    class HMG_01: HMG_127 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 400;
            midRangeProbab = 0.75;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 400;
            minRangeProbab = 0.75;
            midRange = 800;
            midRangeProbab = 0.7;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class far: close {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 800;
            minRange = 800;
            minRangeProbab = 0.6;
            midRange = 1500;
            midRangeProbab = 0.25;
            maxRange = 2000;
            maxRangeProbab = 0.05;
        };
    };
    class HMG_M2: HMG_01 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: manual {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.75;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class medium: close {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 300;
            minRangeProbab = 0.75;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class far: close {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 1000;
            midRangeProbab = 0.25;
            maxRange = 1500;
            maxRangeProbab = 0.05;
        };
    };
    class RHS_M2: HMG_M2 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: short {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.75;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class medium: medium {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 300;
            minRangeProbab = 0.75;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class far: far {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 1000;
            midRangeProbab = 0.25;
            maxRange = 1500;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_gau21_1: RHS_M2 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: close {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: short {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.7;
            midRange = 300;
            midRangeProbab = 0.75;
            maxRange = 600;
            maxRangeProbab = 0.2;
        };
        class medium: medium {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 300;
            minRangeProbab = 0.75;
            midRange = 600;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.2;
        };
        class far: far {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 1000;
            midRangeProbab = 0.25;
            maxRange = 1500;
            maxRangeProbab = 0.05;
        };
    };
    class rhs_weap_M3W_A29: rhs_weap_gau21_1 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: close {
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 120;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short: short {
            burst = 14;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 400;
            minRange = 120;
            minRangeProbab = 0.2;
            midRange = 320;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: medium {
            burst = 4;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 500;
            minRange = 400;
            minRangeProbab = 0.2;
            midRange = 520;
            midRangeProbab = 0.7;
            maxRange = 750;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: far {
            burst = 2;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 700;
            minRangeProbab = 0.2;
            midRange = 820;
            midRangeProbab = 0.7;
            maxRange = 950;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
    };
    class LMG_M200: LMG_RCWS {
        modes[] = {"manual","close","short","medium","far"};
    };
    class rhs_weap_m240veh: LMG_M200 {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: close {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.8;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.2;
        };
        class short: short {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };
        class medium: medium {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 250;
            minRange = 150;
            minRangeProbab = 0.7;
            midRange = 600;
            midRangeProbab = 0.65;
            maxRange = 800;
            maxRangeProbab = 0.1;
        };
        class far: far {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1200;
            maxRangeProbab = 0.1;
        };
    };
    class rhs_weap_m240_m113: rhs_weap_m240veh {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class close: close {
            showToPlayer = 0;
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.8;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.2;
        };
        class short: short {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 150;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
        };
        class medium: medium {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 250;
            minRange = 150;
            minRangeProbab = 0.7;
            midRange = 600;
            midRangeProbab = 0.65;
            maxRange = 800;
            maxRangeProbab = 0.1;
        };
        class far: far {
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 600;
            minRange = 600;
            minRangeProbab = 0.65;
            midRange = 800;
            midRangeProbab = 0.4;
            maxRange = 1200;
            maxRangeProbab = 0.1;
        };
    };
    class rhs_weap_m240H: rhs_weap_m240veh {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
    };
    class RHSUSF_SAFE_BASE: Rifle_Base_F {
        modes[] = {"Safe"};
        class Safe: Mode_SemiAuto {
            showToPlayer = 0;
            minRange = 0;
            minRangeProbab = 0.001;
            midRange = 0.001;
            midRangeProbab = 0.001;
            maxRange = 0.001;
            maxRangeProbab = 0.001;
            burst = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_M320_Base_F: Pistol_Base_F {
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class rhs_weap_XM2010_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_m24sws: rhs_weap_XM2010_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m40a5: rhs_weap_XM2010_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m4_Base: arifle_MX_Base_F {
        modes[] = {"Single","Single_AI","Burst","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.7;
            midRange = 60;
            midRangeProbab = 0.8;
            maxRange = 120;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class FullAuto: Mode_FullAuto {

        };
        class fullauto_medium: FullAuto {

        };
    };
    class rhs_weap_m16a4: rhs_weap_m4_Base {
        modes[] = {"Single","Single_AI","Burst","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 1;
            minRangeProbab = 0.7;
            midRange = 60;
            midRangeProbab = 0.8;
            maxRange = 120;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m4a1: rhs_weap_m4_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2"};
    };
    class rhs_weap_hk416d10: rhs_weap_m4a1 {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2"};
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m27iar: rhs_weap_m4a1 {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2"};
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 550;
            midRangeProbab = 0.7;
            maxRange = 700;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_M249_base: LMG_Mk200_F {
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.69;
            maxRange = 50;
            maxRangeProbab = 0.039;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.69;
            maxRange = 300;
            maxRangeProbab = 0.039;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_saw_base: Rifle_Base_F {
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto {
            maxrange = 600;
            maxrangeprobab = 0.05;
            midrange = 300;
            midrangeprobab = 0.7;
            minrange = 1;
            minrangeprobab = 0.3;
            airateoffire = 4;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            showToPlayer = 0;
            burst = 6;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.69;
            maxRange = 50;
            maxRangeProbab = 0.1;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.4;
            midRange = 150;
            midRangeProbab = 0.69;
            maxRange = 300;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.1;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_lmg_minimipara: rhs_weap_saw_base {
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.7;
            maxRange = 10;
            maxRangeProbab = 0.04;
            airateoffire = 4;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m240_base: rhs_weap_M249_base {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 5;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 7;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class srifle_EBR_F: EBR_base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
    };
    class rhs_weap_m14ebrri_base;  
    class rhs_weap_m14ebrri: rhs_weap_m14ebrri_base {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class rhs_weap_sr25: rhs_weap_m14ebrri {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class rhs_weap_M107_Base_F: GM6_base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_M590_5RD: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 1;
            minRangeProbab = 0.45;
            showToPlayer = 1;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_M590_8RD: rhs_weap_M590_5RD {
        modes[] = {"Single"};
        class Single: Single {
            minRange = 1;
            minRangeProbab = 0.45;
            showToPlayer = 1;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m32_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhsusf_weap_MP7A1_base_f: SMG_02_base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class rhs_weap_SCAR_Base: arifle_MX_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 2;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.69;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_SCAR_L_Base: rhs_weap_SCAR_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_SCAR_H_Base: rhs_weap_SCAR_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_SCAR_H_CQC_Base: rhs_weap_SCAR_H_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_SCAR_H_STD_Base: rhs_weap_SCAR_H_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_SCAR_H_LB_Base: rhs_weap_SCAR_H_Base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhsusf_weap_m1911a1: hgun_ACPC2_F {
        modes[] = {"Single"};
        class Single: Single {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 25;
            showToPlayer = 1;
        };
    };
    class bg21_famas_base: arifle_MX_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.7;
            midRange = 60;
            midRangeProbab = 0.8;
            maxRange = 120;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {

        };
    };
    class CUP_CZ_BREN2_Base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class CUP_hgun_Glock17: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_glaunch_Base: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_glaunch_M79: CUP_glaunch_Base {
        modes[] = {"Single"};
        class Single: Single {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_OTS14_GROZA_Base: Rifle_Base_F {
        modes[] = {"Single","Full","FullAuto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Full: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: Full {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 75;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_OTS14_GROZA_762_base: CUP_arifle_OTS14_GROZA_Base {
        modes[] = {"Single","Full","FullAuto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Full: Full {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: Full {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 75;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_ksvk: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_hgun_M9: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_Mac10_Base: Rifle_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class CUP_hgun_Mac10_Base: Pistol_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class CUP_hgun_Makarov: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_PMM: CUP_hgun_Makarov {
        modes[] = {"Single"};
        class Single: Single {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_MicroUzi: Pistol_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 25;
            midRangeProbab = 0.3;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_Mk23: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_smg_MP5SD6: Rifle_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.25;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.3;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.001;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 7;
            midRangeProbab = 0.7;
            maxRange = 15;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_smg_MP5A5: CUP_smg_MP5SD6 {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.25;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.3;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 40;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_PB6P9: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_TaurusTracker455: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_sgun_Saiga12K: Rifle_Base_F {
        modes[] = {"Single","Single_close","Single_far"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.15;
            showToPlayer = 1;
        };
        class Single_close: Single {
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 170;
            midRangeProbab = 0.8;
            maxRange = 250;
            maxRangeProbab = 0.15;
            burst = 1;
        };
        class Single_far: Single_close {
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            minRange = 220;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.15;
            showToPlayer = 0;
            burst = 1;
        };
    };
    class CUP_hgun_BallisticShield_Armed: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AUG_Base: Rifle_Base_F {
        modes[] = {"FullAuto","Single","fullauto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.3;
            showToPlayer = 0;
            burst = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class CUP_srifle_SVD: Rifle_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class CUP_hgun_TEC9: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_lmg_UK59: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class CUP_srifle_VSSVintorez: Rifle_Base_F {
        modes[] = {"Single","Full"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Full: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 60;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_SR3M_Vikhr: Rifle_Base_F {
        modes[] = {"Single","Full"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Full: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 60;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AK_Base: Rifle_Base_F {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AKS_Base: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AK107_Base: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AKM: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AKS74U: CUP_arifle_AKS_Base {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 25;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 75;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AK47: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AKS: CUP_arifle_AKM {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_AK74: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK74_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AKS74: CUP_arifle_AKS_Base {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK74M: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK107: CUP_arifle_AK107_Base {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base {
        modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 50;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK102: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK104: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_AK105: CUP_arifle_AK_Base {
        modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst_medium: Burst {
            showToPlayer = 0;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            burst = 3;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_medium_optics2: single_medium_optics1 {

        };
    };
    class CUP_arifle_RPK74: CUP_arifle_AK_Base {
        modes[] = {"manual","close","short","medium","far_optic1","far_optic2","Single"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 1.5;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 500;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
        class Single: Mode_SemiAuto {
            aiRateOfFireDistance = 650;
            minRange = 400;
            minRangeProbab = 0;
            midRange = 600;
            midRangeProbab = 0;
            maxRange = 800;
            maxRangeProbab = 0;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class FullAuto: Mode_FullAuto {

        };
    };
    class CUP_arifle_TYPE_56_2: CUP_arifle_AKM {
        modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 250;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_AS50: Rifle_Long_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_srifle_AWM_Base: Rifle_Long_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 1500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_smg_bizon: Rifle_Base_F {
        modes[] = {"FullAuto","Single","Burst"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 40;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.25;
            midRange = 40;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.3;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.05;
            showToPlayer = 0;
            burst = 3;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_Colt1911: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_CZ805_Base: Rifle_Base_F {
        modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class CUP_hgun_Deagle: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 5;
            minRangeProbab = 0.3;
            midRange = 25;
            midRangeProbab = 0.6;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_smg_EVO: Rifle_Short_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class CUP_arifle_FNFAL: Rifle_Base_F {
        modes[] = {"Fullauto","Single"};
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 80;
            midRangeProbab = 0.7;
            maxRange = 200;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 600;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
    };
    class CUP_arifle_G36_Base: Rifle_Base_F {
        modes[] = {"Single","Fullauto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 120;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_G36_Base_CarryhandleOptics: CUP_arifle_G36_Base {
        modes[] = {"Single","Fullauto"};
    };
    class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics {
        modes[] = {"Single","Fullauto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_G36C: CUP_arifle_G36_Base {
        modes[] = {"Single","Fullauto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_MG36: CUP_arifle_G36C {
        modes[] = {"Single","Fullauto","close","medium","far"};
        class Single: Mode_SemiAuto {
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 600;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 6;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 100;
            midRangeProbab = 0.58;
            maxRange = 200;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 8;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 400;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
    };
    class CUP_arifle_HK416_145_Base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 2;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class Burst: Mode_Burst {

        };
    };
    class CUP_arifle_HK416_11_Base: CUP_arifle_HK416_145_Base {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_HK417_Base: CUP_arifle_HK416_145_Base {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 600;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_sgun_CZ584: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 0;
            minRangeProbab = 0.5;
            midRange = 60;
            midRangeProbab = 0.2;
            maxRange = 100;
            maxRangeProbab = 0.03;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_L129A1: Rifle_Base_F {
        modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 500;
            midRangeProbab = 0.7;
            maxRange = 1000;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class CUP_l85a2_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class CUP_sgun_M1014_base: Rifle_Base_F {
        modes[] = {"Single","Single_close","Single_far"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 20;
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.15;
            showToPlayer = 1;
        };
        class Single_close: Single {
            showToPlayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 170;
            midRangeProbab = 0.8;
            maxRange = 250;
            maxRangeProbab = 0.15;
            burst = 1;
        };
        class Single_far: Single_close {
            aiRateOfFire = 4;
            aiRateOfFireDistance = 300;
            minRange = 220;
            minRangeProbab = 0.1;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.15;
            showToPlayer = 0;
            burst = 1;
        };
    };
    class CUP_srifle_M107_Base: Rifle_Long_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 450;
            maxRangeProbab = 0.3;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_srifle_M110: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.69;
            maxRange = 500;
            maxRangeProbab = 0.045;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class CUP_srifle_M14: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
    };
    class CUP_arifle_M16_Base: Rifle_Base_F {
        modes[] = {"Single","Burst"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_M4_Base: CUP_arifle_M16_Base {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_XM16E1: CUP_arifle_M16_Base {
        modes[] = {"Single","FullAuto"};
        class FullAuto: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Colt727: CUP_arifle_M16_Base {
        modes[] = {"Single","FullAuto"};
        class FullAuto: Mode_FullAuto {
            minRange = 1;
            minRangeProbab = 0.2;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_srifle_Mk12SPR: CUP_arifle_M4_Base {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_lmg_M240: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 13;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class CUP_saw_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_M60E4_base: Rifle_Long_Base_F {
        modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 2.5;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_lmg_MG3: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 13;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class CUP_lmg_Mk48_Base: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far","far_optic1","far_optic2"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.04;
            aiRateOfFireDistance = 50;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.6;
            maxRange = 600;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: close {
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
        class far_optic1: close {

        };
        class far_optic2: far_optic1 {

        };
    };
    class CUP_smg_MP7: Rifle_Short_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class CUP_hgun_MP7: Pistol_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 100;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class CUP_lmg_PKM: Rifle_Long_Base_F {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class CUP_lmg_Pecheneg: CUP_lmg_PKM {
        modes[] = {"manual","close","short","medium","far"};
        class manual: manual {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: close {
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            showToPlayer = 0;
        };
        class short: short {
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 200;
            midRangeProbab = 0.58;
            maxRange = 400;
            maxRangeProbab = 0.04;
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            showToPlayer = 0;
        };
        class medium: medium {
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            burst = 12;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            showToPlayer = 0;
        };
        class far: far {
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 1000;
            maxRangeProbab = 0.01;
            burst = 16;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            showToPlayer = 0;
        };
    };
    class CUP_arifle_Sa58_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.05;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_close_optics1: Single {

        };
        class single_medium_optics1: single_close_optics1 {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 50;
            midRangeProbab = 0.7;
            maxRange = 100;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_hgun_SA61: Pistol_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.7;
            midRange = 25;
            midRangeProbab = 0.3;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_smg_SA61: Rifle_Base_F {
        modes[] = {"Single","FullAuto"};
        class Single: Mode_SemiAuto {
            minRange = 0;
            minRangeProbab = 0.05;
            midRange = 30;
            midRangeProbab = 0.3;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.3;
            maxRange = 50;
            maxRangeProbab = 0.02;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_SCAR_Base: Rifle_Base_F {
        modes[] = {"SCAR_L_Single"};
        class SCAR_L_Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class SCAR_L_FullAuto: Mode_FullAuto {

        };
    };
    class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base {
        modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
        class SCAR_H_Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 600;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_H_FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_SCAR_L_Base: CUP_arifle_SCAR_Base {
        modes[] = {"SCAR_L_Single"};
    };
    class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
        class SCAR_L_Single: SCAR_L_Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.9;
            maxRange = 600;
            maxRangeProbab = 0.1;
            aiRateOfFireDistance = 600;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_L_FullAuto: SCAR_L_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
        class SCAR_L_Single: SCAR_L_Single {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 800;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_L_FullAuto: SCAR_L_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base {
        modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
        class SCAR_L_Single: SCAR_L_Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_L_FullAuto: SCAR_L_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Mk17_CQC: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
        class SCAR_H_Single: SCAR_H_Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_H_FullAuto: SCAR_H_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Mk17_STD: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
    };
    class CUP_arifle_Mk17_STD_FG: CUP_arifle_Mk17_STD {
        modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
        class SCAR_H_Single: SCAR_H_Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 300;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_H_FullAuto: SCAR_H_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_Mk20: CUP_arifle_Mk17_Base {
        modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
        class SCAR_H_Single: SCAR_H_Single {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 400;
            midRangeProbab = 0.7;
            maxRange = 800;
            maxRangeProbab = 0.05;
            aiRateOfFireDistance = 800;
            showToPlayer = 1;
            aiRateOfFire = 2;
        };
        class SCAR_H_FullAuto: SCAR_H_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class CUP_arifle_XM8_Base: Rifle_Base_F {
        modes[] = {"Single","Fullauto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 120;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {

        };
    };
    class CUP_arifle_XM8_Railed_Base: Rifle_Base_F {
        modes[] = {"Single","Fullauto"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 600;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 30;
            midRangeProbab = 0.7;
            maxRange = 120;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Mode_Burst {

        };
    };
    class CUP_arifle_xm8_sharpshooter: CUP_arifle_XM8_Base {
        modes[] = {"Single","Fullauto"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {

        };
    };
    class CUP_arifle_xm8_SAW: CUP_arifle_xm8_sharpshooter {
        modes[] = {"Single","Fullauto","Close","Short","Medium","Far"};
        class Manual: FullAuto {

        };
        class Close: Manual {
            burst = 10;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class Short: Close {
            burst = 6;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 100;
            midRangeProbab = 0.58;
            maxRange = 200;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class Medium: Close {
            burst = 8;
            aiRateOfFire = 4;
            aiRateOfFireDistance = 400;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class Far: Close {
            burst = 7;
            aiRateOfFire = 7;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 500;
            midRangeProbab = 0.4;
            maxRange = 600;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class CUP_arifle_XM8_Compact: CUP_arifle_XM8_Base {
        modes[] = {"Single","Fullauto"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.1;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Fullauto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 20;
            midRangeProbab = 0.7;
            maxRange = 60;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Burst: Burst {

        };
    };
    class hlc_G36_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 600;
            midRangeProbab = 0.05;
            maxRange = 800;
            maxRangeProbab = 0.01;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class AI_Burst_close: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.2;
        };
        class Burst: Mode_Burst {

        };
        class Burst2rnd: Burst {

        };
    };
    class hlc_rifle_MG36: hlc_G36_base {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
        class fullauto_medium: fullauto_medium {
            burst = 4;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.7;
            maxRange = 300;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 600;
        };
    };
    class hlc_rifle_G36A1: hlc_G36_base {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
    };
    class hlc_rifle_G36KA1: hlc_rifle_G36A1 {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","AI_Burst_close"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 600;
            midRangeProbab = 0.05;
            maxRange = 800;
            maxRangeProbab = 0.01;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class AI_Burst_close: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.2;
        };
        class Burst: Burst {

        };
    };
    class hlc_rifle_G36C: hlc_G36_base {
        modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_rifle_G36E1: hlc_rifle_G36A1 {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
    };
    class hlc_rifle_G36KE1: hlc_rifle_G36KA1 {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
    };
    class hlc_rifle_G36V: hlc_G36_base {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
    };
    class hlc_rifle_G36KV: hlc_rifle_G36V {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class Burst: Burst {

        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_rifle_G36CV: hlc_rifle_G36V {
        modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.2;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_rifle_G36MLIC: hlc_G36_base {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class Burst: Burst {

        };
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_rifle_G36KMLIC: hlc_rifle_G36MLIC {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class Burst: Burst {

        };
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_rifle_G36CMLIC: hlc_rifle_G36MLIC {
        modes[] = {"Single","Burst2rnd","FullAuto","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 250;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 400;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class Burst: Burst {

        };
        class Burst2rnd: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 10;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {

        };
        class AI_Burst_close: FullAuto {

        };
    };
    class hlc_g3_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 350;
            minRange = 15;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 15;
            maxRangeProbab = 0.2;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class single_medium: Single {
            showtoplayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            burst = 1;
        };
    };
    class hlc_rifle_psg1: hlc_g3_base {
        modes[] = {"Single","single_medium_optics1"};
        class Single: Single {
            aiRateOfFire = 7;
            aiRateOfFireDistance = 1000;
            minRange = 0;
            minRangeProbab = 0.4;
            midRange = 500;
            midRangeProbab = 0.8;
            maxRange = 1600;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
    };
    class hlc_rifle_g3sg1: hlc_g3_base {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
    };
    class hlc_rifle_g3a3: hlc_rifle_g3sg1 {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
        class Single: Single {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 350;
            minRange = 15;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 15;
            maxRangeProbab = 0.2;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class single_medium: Single {
            showtoplayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            burst = 1;
        };
    };
    class hlc_rifle_g3ka4: hlc_rifle_g3a3 {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
        class Single: Single {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 350;
            minRange = 15;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 15;
            maxRangeProbab = 0.2;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class single_medium: Single {
            showtoplayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            burst = 1;
        };
    };
    class hlc_rifle_hk51: hlc_rifle_g3sg1 {
        modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics1","single_medium"};
        class Single: Single {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 350;
            minRange = 15;
            minRangeProbab = 0.8;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 15;
            maxRangeProbab = 0.2;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class single_medium: Single {
            showtoplayer = 0;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            burst = 1;
        };
    };
    class hlc_rifle_hk53: hlc_g3_base {
        modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","AI_Burst_close"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 30;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 30;
            midRangeProbab = 0.8;
            maxRange = 60;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 5;
            midRangeProbab = 0.8;
            maxRange = 10;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class AI_Burst_close: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.2;
        };
    };
    class hlc_rifle_hk33a2: hlc_g3_base {
        modes[] = {"Single","Burst","FullAuto","single_medium_optics1","single_far_optics2","AI_Burst_close","AI_far"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 350;
            minRange = 20;
            minRangeProbab = 0.7;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 0;
            minRangeProbab = 0.2;
            midRange = 20;
            midRangeProbab = 0.8;
            maxRange = 40;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class AI_Burst_close: FullAuto {
            showToPlayer = 0;
            burst = 4;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 5;
            minRangeProbab = 0.8;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.2;
        };
        class AI_far: Single {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 600;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 600;
            midRangeProbab = 0.05;
            maxRange = 800;
            maxRangeProbab = 0.01;
        };
    };
    class hlc_MG42_base: Rifle_Base_F {
        modes[] = {"FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 100;
            minRange = 25;
            minRangeProbab = 0.1;
            midRange = 50;
            midRangeProbab = 0.8;
            maxRange = 100;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 100;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium_burst: close {
            burst = 4;
            aiRateOfFire = 0.05;
            aiRateOfFireDistance = 400;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: close {
            burst = 4;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 400;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class veryfar: close {
            burst = 5;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 800;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 800;
            midRangeProbab = 0.2;
            maxRange = 1000;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class toofar_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
        class toofar_optic2: far_optic2 {

        };
    };
    class hlc_lmg_MG3: hlc_MG42_base {
        modes[] = {"FullAuto","close","short","medium","medium_burst","far","veryfar","far_optic1","toofar_optic1","far_optic2","toofar_optic2"};
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.7;
            maxRange = 20;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class close: FullAuto {
            burst = 10;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.8;
            maxRange = 50;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 100;
            minRange = 25;
            minRangeProbab = 0.1;
            midRange = 50;
            midRangeProbab = 0.8;
            maxRange = 100;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 5;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 200;
            minRange = 50;
            minRangeProbab = 0.1;
            midRange = 100;
            midRangeProbab = 0.8;
            maxRange = 200;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class medium_burst: close {
            burst = 4;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 400;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class far: close {
            burst = 4;
            aiRateOfFire = 0.06;
            aiRateOfFireDistance = 400;
            minRange = 100;
            minRangeProbab = 0.1;
            midRange = 200;
            midRangeProbab = 0.8;
            maxRange = 400;
            maxRangeProbab = 0.1;
            showToPlayer = 0;
        };
        class veryfar: close {
            burst = 5;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 800;
            minRange = 400;
            minRangeProbab = 0.1;
            midRange = 800;
            midRangeProbab = 0.2;
            maxRange = 1000;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
        class far_optic1: medium {

        };
        class toofar_optic1: medium {

        };
        class far_optic2: far_optic1 {

        };
        class toofar_optic2: far_optic2 {

        };
    };
    class hlc_MP5_base: Rifle_Base_F {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class Burst: Mode_Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.5;
            maxRange = 60;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 20;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
    };
    class hlc_smg_mp5k_PDW: hlc_MP5_base {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class Burst: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.5;
            maxRange = 60;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 20;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
    };
    class hlc_smg_MP5N: hlc_MP5_base {
        modes[] = {"Single","Burst","FullAuto"};
    };
    class hlc_smg_9mmar: hlc_smg_MP5N {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class Burst: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.5;
            maxRange = 60;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 20;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
    };
    class hlc_smg_mp510: hlc_smg_MP5N {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class Burst: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.5;
            maxRange = 60;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 20;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
    };
    class hlc_smg_mp5sd5: hlc_MP5_base {
        modes[] = {"Single","Burst","FullAuto"};
        class Single: Single {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.9;
            midRange = 80;
            midRangeProbab = 0.5;
            maxRange = 300;
            maxRangeProbab = 0.01;
            showToPlayer = 1;
        };
        class Burst: Burst {
            aiRateOfFire = 1;
            aiRateOfFireDistance = 100;
            minRange = 20;
            minRangeProbab = 0.8;
            midRange = 30;
            midRangeProbab = 0.5;
            maxRange = 60;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 10;
            midRangeProbab = 0.8;
            maxRange = 20;
            maxRangeProbab = 0.4;
            showToPlayer = 1;
        };
    };
    class hlc_STGW_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
        class Single: Mode_SemiAuto {
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 150;
            midRangeProbab = 0.5;
            maxRange = 500;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class FullAuto: Mode_FullAuto {
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
            showToPlayer = 1;
        };
        class single_close_optics1: FullAuto {

        };
        class single_medium_optics1: Single {

        };
        class single_far_optics1: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 5;
            aiRateOfFire = 0.1;
            aiRateOfFireDistance = 50;
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 1;
            midRangeProbab = 0.8;
            maxRange = 5;
            maxRangeProbab = 0.1;
        };
    };
    class ACE_VMM3: Pistol_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_kar98k_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_m38_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: far_optic1 {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_m38: rhs_weap_m38_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
    };
    class rhs_weap_m38_rail: rhs_weap_m38 {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
    };
    class rhs_weap_mosin_sbr: rhs_weap_m38_rail {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: far_optic1 {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_m70_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_m92: rhs_weap_m70_base {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m76: rhs_weap_m70_base {
        modes[] = {"Single","single_medium_optics1","single_far_optics2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class rhs_weap_m21_base: rhs_weap_m70_base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            burst = 1;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_m21s: rhs_weap_m21_base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_m21a_pr: rhs_weap_m21_base {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
    };
    class rhs_weap_m21s_pr: rhs_weap_m21a_pr {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
    };
    class SMG_01_F: SMG_01_Base {
        modes[] = {"Single","Burst","FullAuto"};
    };
    class rhs_weap_savz61: SMG_01_F {
        modes[] = {"Single","FullAuto"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 350;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
            showToPlayer = 1;
        };
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.1;
            midRange = 25;
            midRangeProbab = 0.7;
            maxRange = 70;
            maxRangeProbab = 0.05;
            aiRateOfFire = 0.2;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class rhs_weap_savz58_base: Rifle_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            burst = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_Izh18: Rifle_Base_F {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            minRange = 1;
            minRangeProbab = 0.45;
            showToPlayer = 1;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
    class rhs_weap_vhs2_base: Rifle_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            burst = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_stgw57_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_m3a1_base: Rifle_Base_F {
        modes[] = {"FullAuto"};
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class rhs_weap_m3a1_specops: rhs_weap_m3a1_base {
        modes[] = {"FullAuto"};
        class FullAuto: FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            aiRateOfFireDistance = 50;
            showToPlayer = 1;
        };
    };
    class rhs_weap_MP44_base: Rifle_Base_F {
        modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.05;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_M1garand_Base_F: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 350;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.05;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_mg42_base: Rifle_Base_F {
        modes[] = {"manual","close","short","medium","far"};
        class manual: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.3;
            midRange = 5;
            midRangeProbab = 0.58;
            maxRange = 10;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class close: manual {
            burst = 8;
            aiRateOfFire = 0.5;
            aiRateOfFireDistance = 50;
            minRange = 10;
            minRangeProbab = 0.05;
            midRange = 20;
            midRangeProbab = 0.58;
            maxRange = 50;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class short: close {
            burst = 8;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 300;
            minRange = 50;
            minRangeProbab = 0.05;
            midRange = 150;
            midRangeProbab = 0.58;
            maxRange = 300;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class medium: close {
            burst = 6;
            aiRateOfFire = 3;
            aiRateOfFireDistance = 600;
            minRange = 200;
            minRangeProbab = 0.05;
            midRange = 400;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            showToPlayer = 0;
        };
        class far: close {
            burst = 5;
            aiRateOfFire = 5;
            aiRateOfFireDistance = 1000;
            minRange = 400;
            minRangeProbab = 0.05;
            midRange = 600;
            midRangeProbab = 0.4;
            maxRange = 900;
            maxRangeProbab = 0.01;
            showToPlayer = 0;
        };
    };
    class rhs_weap_m79: Rifle_Base_F {
        modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.3;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.04;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class far_optic1: Single {

        };
        class medium_optic2: Single {

        };
        class far_optic2: far_optic1 {

        };
    };
    class rhs_weap_fnfal_base: Rifle_Base_F {
        modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
        class Single: Mode_SemiAuto {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            burst = 1;
        };
        class FullAuto: Mode_FullAuto {
            minRange = 0;
            minRangeProbab = 0.9;
            midRange = 15;
            midRangeProbab = 0.7;
            maxRange = 30;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1e-006;
            showToPlayer = 1;
            aiRateOfFireDistance = 500;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
        class fullauto_medium: FullAuto {
            showToPlayer = 0;
            burst = 3;
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 75;
            midRangeProbab = 0.7;
            maxRange = 150;
            maxRangeProbab = 0.1;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 200;
        };
    };
    class rhs_weap_l1a1_base: rhs_weap_fnfal_base {
        modes[] = {"Single","Single_AI","single_medium_optics1","single_far_optics2"};
        class Single: Single {
            minRange = 2;
            minRangeProbab = 0.5;
            midRange = 200;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            showToPlayer = 1;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
        class Single_AI: Single {
            showToPlayer = 0;
            minRange = 200;
            minRangeProbab = 0.5;
            midRange = 300;
            midRangeProbab = 0.7;
            maxRange = 400;
            maxRangeProbab = 0.3;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 300;
            burst = 1;
        };
        class single_medium_optics1: Single {

        };
        class single_far_optics2: single_medium_optics1 {

        };
    };
    class rhs_weap_pya: hgun_Rook40_F {
        modes[] = {"Single"};
    };
    class rhs_weap_tt33: rhs_weap_pya {
        modes[] = {"Single"};
        class Single: Mode_SemiAuto {
            showToPlayer = 1;
            minRange = 30;
            minRangeProbab = 0.25;
            midRange = 300;
            midRangeProbab = 0.58;
            maxRange = 600;
            maxRangeProbab = 0.04;
            aiRateOfFire = 2;
            aiRateOfFireDistance = 500;
        };
    };
};

