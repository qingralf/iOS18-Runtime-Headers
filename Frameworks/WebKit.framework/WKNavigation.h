/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKNavigation : NSObject <WKObject> {
    struct ObjectStorage<API::Navigation> { 
        struct type { 
            unsigned char __lx[3504]; 
        } data; 
    }  _navigation;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long effectiveContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)accessInstanceVariablesDirectly;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (bool)_isUserInitiated;
- (id)_request;
- (void)dealloc;
- (long long)effectiveContentMode;

@end