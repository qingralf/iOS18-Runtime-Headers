/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
 */

@interface EDPersistedAttachmentID : NSObject <NSCopying> {
    void databaseID;
    void stringValue;
}

@property (nonatomic, readonly) long long databaseID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *stringValue;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (long long)databaseID;
- (id)description;
- (long long)hash;
- (id)init;
- (id)initWithDatabaseID:(long long)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringValue;

@end
