/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NotesAnalytics.framework/NotesAnalytics
 */

@interface ICASFastSyncParticipantData : NSObject <AADataEventType> {
    NSNumber * _countOfUniqueAccounts;
    NSNumber * _countOfUniqueDevices;
}

@property (nonatomic, readonly) NSNumber *countOfUniqueAccounts;
@property (nonatomic, readonly) NSNumber *countOfUniqueDevices;

+ (id)dataName;
+ (bool)requiresDiagnosticsConsent;

- (void).cxx_destruct;
- (id)countOfUniqueAccounts;
- (id)countOfUniqueDevices;
- (id)initWithCountOfUniqueAccounts:(id)arg1 countOfUniqueDevices:(id)arg2;
- (id)toDict;

@end