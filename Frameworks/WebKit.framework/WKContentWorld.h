/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKContentWorld : NSObject <WKObject> {
    struct ObjectStorage<API::ContentWorld> { 
        struct type { 
            unsigned char __lx[56]; 
        } data; 
    }  _contentWorld;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) _WKUserContentWorld *_userContentWorld;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *name;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

+ (bool)accessInstanceVariablesDirectly;
+ (id)defaultClientWorld;
+ (id)pageWorld;
+ (id)worldWithName:(id)arg1;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)_userContentWorld;
- (void)dealloc;
- (id)name;

// Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI

+ (id)safari_worldForScribbleScript;

@end
