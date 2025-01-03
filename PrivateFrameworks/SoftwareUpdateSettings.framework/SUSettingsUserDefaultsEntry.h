/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateSettings.framework/SoftwareUpdateSettings
 */

@interface SUSettingsUserDefaultsEntry : NSObject {
    NSString * _entryDescription;
    NSString * _key;
    long long  _type;
}

@property (nonatomic, readonly) NSString *entryDescription;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)entryDescription;
- (id)initBoolEntryWithKey:(id)arg1 description:(id)arg2;
- (id)initNumberEntryWithKey:(id)arg1 description:(id)arg2;
- (id)initStringEntryWithKey:(id)arg1 description:(id)arg2;
- (id)initWithType:(long long)arg1 key:(id)arg2 description:(id)arg3;
- (id)key;
- (long long)type;

@end
