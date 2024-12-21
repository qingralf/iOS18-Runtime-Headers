/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRelativeTextPosition : UITextPosition {
    struct OptionSet<WebKit::TextPositionAnchor> { 
        unsigned char m_storage; 
    }  _anchors;
    long long  _offset;
}

@property (nonatomic, readonly) struct OptionSet<WebKit::TextPositionAnchor> { unsigned char x1; } anchors;
@property (nonatomic, readonly) long long offset;
@property (getter=isRelativeToStart, nonatomic, readonly) bool relativeToStart;

- (id).cxx_construct;
- (struct OptionSet<WebKit::TextPositionAnchor> { unsigned char x1; })anchors;
- (id)description;
- (id)initWithAnchors:(struct OptionSet<WebKit::TextPositionAnchor> { unsigned char x1; })arg1 offset:(long long)arg2;
- (bool)isRelativeToStart;
- (long long)offset;

@end