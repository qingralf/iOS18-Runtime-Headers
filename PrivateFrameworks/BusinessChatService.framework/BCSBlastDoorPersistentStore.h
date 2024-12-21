/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BusinessChatService.framework/BusinessChatService
 */

@interface BCSBlastDoorPersistentStore : NSObject <BCSBlastDoorImageCache> {
    NSURL * _cacheURL;
}

@property (nonatomic, copy) NSURL *cacheURL;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cacheURL;
- (void)deleteExpiredImages;
- (void)deleteImageWithName:(id)arg1;
- (id)fileURLForImageWithName:(id)arg1 error:(id*)arg2;
- (void)setCacheURL:(id)arg1;
- (id)updateImageWithName:(id)arg1 error:(id*)arg2;

@end