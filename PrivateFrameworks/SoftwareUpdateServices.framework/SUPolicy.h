/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUPolicy : NSObject {
    NSDictionary * _additionalOptions;
}

@property (nonatomic, readonly, retain) NSDictionary *additionalOptions;
@property (nonatomic, readonly) bool allowExpensiveNetwork;
@property (nonatomic, readonly) bool allowsCellular;
@property (nonatomic, readonly) bool discretionary;
@property (nonatomic, readonly) int downloadTimeoutSecs;
@property (nonatomic, readonly) bool requiresPowerPluggedIn;
@property (nonatomic, readonly) bool skipPhase;

- (void).cxx_destruct;
- (id)_stringForBool:(bool)arg1;
- (id)additionalOptions;
- (bool)allowExpensiveNetwork;
- (bool)allowsCellular;
- (id)description;
- (bool)discretionary;
- (int)downloadTimeoutSecs;
- (bool)requiresPowerPluggedIn;
- (bool)skipPhase;

@end