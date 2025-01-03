/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BlastDoor.framework/BlastDoor
 */

@interface BlastDoorChatSessionClose : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  chatSessionClose;
}

@property (nonatomic, readonly) NSString *conversationID;
@property (nonatomic, readonly) bool deleteConversation;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *handle;
@property (nonatomic, readonly) bool isEmergencySOS;
@property (nonatomic, readonly) BlastDoorMetadata *metadata;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)conversationID;
- (bool)deleteConversation;
- (id)description;
- (id)handle;
- (id)init;
- (bool)isEmergencySOS;
- (id)metadata;
- (id)name;
- (long long)version;

@end
