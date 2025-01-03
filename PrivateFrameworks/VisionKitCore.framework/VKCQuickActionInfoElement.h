/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VisionKitCore.framework/VisionKitCore
 */

@interface VKCQuickActionInfoElement : NSObject {
    NSArray * _children;
    NSUUID * _correlationIdentifier;
    UIImage * _image;
    bool  _isLeaf;
    UIMenuElement * _representedMenuElement;
    NSString * _text;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic, retain) NSUUID *correlationIdentifier;
@property (nonatomic, retain) UIImage *image;
@property (nonatomic) bool isLeaf;
@property (nonatomic, retain) UIMenuElement *representedMenuElement;
@property (nonatomic, retain) NSString *text;

+ (id)elementFromElement:(id)arg1;
+ (id)elementFromUIAction:(id)arg1;
+ (id)elementFromUIMenu:(id)arg1;
+ (id)elementFromUIMenuElement:(id)arg1;

- (void).cxx_destruct;
- (id)children;
- (id)correlationIdentifier;
- (id)image;
- (bool)isLeaf;
- (id)linearizeElements;
- (void)performAction;
- (id)representedMenuElement;
- (void)setChildren:(id)arg1;
- (void)setCorrelationIdentifier:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsLeaf:(bool)arg1;
- (void)setRepresentedMenuElement:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;

@end
