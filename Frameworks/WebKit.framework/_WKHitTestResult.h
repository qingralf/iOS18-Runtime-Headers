/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface _WKHitTestResult : NSObject <NSCopying, WKObject> {
    struct ObjectStorage<API::HitTestResult> { 
        struct type { 
            unsigned char __lx[688]; 
        } data; 
    }  _hitTestResult;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) NSURL *absoluteImageURL;
@property (nonatomic, readonly, copy) NSURL *absoluteLinkURL;
@property (nonatomic, readonly, copy) NSURL *absoluteMediaURL;
@property (nonatomic, readonly, copy) NSURL *absolutePDFURL;
@property (getter=isContentEditable, nonatomic, readonly) bool contentEditable;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } elementBoundingBox;
@property (nonatomic, readonly) long long elementType;
@property (nonatomic, readonly) WKFrameInfo *frameInfo;
@property (nonatomic, readonly) bool hasLocalDataForLinkURL;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageMIMEType;
@property (nonatomic, readonly, copy) NSString *imageSuggestedFilename;
@property (nonatomic, readonly, copy) NSString *linkLabel;
@property (nonatomic, readonly, copy) NSString *linkLocalDataMIMEType;
@property (nonatomic, readonly, copy) NSString *linkSuggestedFilename;
@property (nonatomic, readonly, copy) NSString *linkTitle;
@property (nonatomic, readonly, copy) NSString *lookupText;
@property (getter=isMediaDownloadable, nonatomic, readonly) bool mediaDownloadable;
@property (getter=isMediaFullscreen, nonatomic, readonly) bool mediaFullscreen;
@property (getter=isSelected, nonatomic, readonly) bool selected;
@property (readonly) Class superclass;

- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)absoluteImageURL;
- (id)absoluteLinkURL;
- (id)absoluteMediaURL;
- (id)absolutePDFURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBoundingBox;
- (long long)elementType;
- (id)frameInfo;
- (bool)hasLocalDataForLinkURL;
- (id)imageMIMEType;
- (id)imageSuggestedFilename;
- (bool)isContentEditable;
- (bool)isMediaDownloadable;
- (bool)isMediaFullscreen;
- (bool)isSelected;
- (id)linkLabel;
- (id)linkLocalDataMIMEType;
- (id)linkSuggestedFilename;
- (id)linkTitle;
- (id)lookupText;

@end