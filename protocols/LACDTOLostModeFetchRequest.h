/* Generated by RuntimeBrowser.
 */

@protocol LACDTOLostModeFetchRequest <NSObject>

@required

- (LACDTOBiometryWatchdogPack *)biometryWatchdogPack;
- (bool)isDTOEnabled;
- (NSDictionary *)options;
- (long long)policy;
- (LACDTORatchetState *)ratchetState;

@end