## tS Vehicle On Fire

#### Version: 3
#### Requirement: CBA_A3, ACE3
Mod prevents APC (and any other vehicles that can be configured in mod's settings) from instant destruction in the fireball and adds vehicle fire, that burns vehicle after some time
<br />The mod is compatible & depends on ACE Cookoff module; the mod is configured to be compatible with vehicles of APC class from RHS AFRF, RHS USAF and CUP Vehicles.

<br />Features:
- Prevents instant explosion and adds engine fire after engine/fuel critical hit
- Added smoke effect, notification and damage to crew when vehicle is on fire
- Disables ACE-cookoff for APC vehicles with MG only (e.g. BRDM/BTR w.KPVT)
- Massive damage immobilize vehicle instead of exploding it (pretending that transmission, vehicle axes and other not simulated stuff become broken or destroyed)

<br />Usage:
- Install the mod to your client or dedicated server only
- Check mod settings in the ((Settings -> Addon Configuration))
- If needed - update the list of the classes that should NOT cook-off, but burn in the "Non-cooking off vehicles" in format [@Classname, @DamageLimit], where @Classname is a class of vehicle or it's parent, and @DamageLimit is number of damage that vehicle can take before immobilization; you can define any vehicle class or even root classes, like Car_F
- If needed - update the list of the classes that are sub-classes of "Non-cooking off vehicles", but should cook-ff (e.g. BTR-82A) in the "Cooking off vehicles"
- Start the game and have fun!
