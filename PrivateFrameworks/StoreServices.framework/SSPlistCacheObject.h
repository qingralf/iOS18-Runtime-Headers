/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPlistCacheObject : NSObject <SSCacheObject> {
    NSDictionary * _plist;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)cacheObjectTypeIdentifier;

- (id)cacheObjectDataRepresentation;
- (id)cacheObjectTypeIdentifier;
- (void)dealloc;
- (id)initWithCacheObjectDataRepresentation:(id)arg1;
- (id)plist;
- (void)setPlist:(id)arg1;

@end
