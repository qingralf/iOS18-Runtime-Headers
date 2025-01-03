/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreEmbeddedSpeechRecognition.framework/CoreEmbeddedSpeechRecognition
 */

@interface CESRSpeechProfileSite : NSObject <NSCopying> {
    int  _dataProtectionClass;
    NSString * _description;
    NSMutableArray * _instances;
    bool  _isInUserVault;
    CESRDictionaryLog * _log;
    NSString * _personaId;
    NSURL * _speechProfileSiteURL;
    NSNumber * _userIdHash;
}

@property (nonatomic, readonly) int dataProtectionClass;
@property (nonatomic, readonly) NSArray *instances;
@property (nonatomic, readonly) bool isInUserVault;
@property (nonatomic, readonly) NSDate *lastMaintenance;
@property (nonatomic, readonly) NSDate *lastRebuild;
@property (nonatomic, readonly) NSDate *lastReset;
@property (nonatomic, readonly) NSString *personaId;
@property (nonatomic, readonly) NSNumber *schemaVersion;
@property (nonatomic, readonly) NSURL *speechProfileSiteURL;
@property (nonatomic, readonly) NSString *userId;
@property (nonatomic, readonly) NSNumber *userIdHash;

+ (id)_existingSpeechProfileSiteAtURL:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3;
+ (id)_speechProfileSiteAtRootDirectoryURL:(id)arg1 userId:(id)arg2 readOnly:(bool)arg3 error:(id*)arg4;
+ (id)_speechProfileSiteAtURL:(id)arg1 userId:(id)arg2 userIdHash:(id)arg3 readOnly:(bool)arg4 error:(id*)arg5;
+ (id)speechProfileSiteAtURL:(id)arg1 readOnly:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)dataProtectionClass;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpeechProfileSiteURL:(id)arg1 readOnly:(bool)arg2 create:(bool)arg3 userId:(id)arg4 userIdHash:(id)arg5 error:(id*)arg6;
- (id)instanceWithLocale:(id)arg1 options:(unsigned char)arg2 error:(id*)arg3;
- (id)instances;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpeechProfileSite:(id)arg1;
- (bool)isEquivalentSpeechProfileSiteURL:(id)arg1;
- (bool)isInUserVault;
- (id)lastMaintenance;
- (id)lastRebuild;
- (id)lastReset;
- (id)personaId;
- (bool)recordMaintenance:(id*)arg1;
- (bool)recordRebuild:(id*)arg1;
- (bool)recordReset:(id*)arg1;
- (bool)recordSchemaVersion:(id*)arg1;
- (bool)remove:(id*)arg1;
- (bool)removeInstance:(id)arg1 error:(id*)arg2;
- (id)schemaVersion;
- (id)speechProfileSiteURL;
- (id)userId;
- (id)userIdHash;

@end
