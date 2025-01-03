/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ProtectedCloudStorage.framework/ProtectedCloudStorage
 */

@interface PCSCurrentIdentity : NSObject {
    NSDate * _currentItemPointerModificationTime;
    struct _PCSIdentityData { } * _identity;
}

@property (retain) NSDate *currentItemPointerModificationTime;
@property (readonly) struct _PCSIdentityData { }*identity;

- (void).cxx_destruct;
- (id)currentItemPointerModificationTime;
- (void)dealloc;
- (struct _PCSIdentityData { }*)identity;
- (id)initWithIdentity:(struct _PCSIdentityData { }*)arg1 currentItemPointerModificationTime:(id)arg2;
- (void)setCurrentItemPointerModificationTime:(id)arg1;

@end
