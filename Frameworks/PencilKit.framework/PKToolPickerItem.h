/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKToolPickerItem : NSObject <NSCopying> {
    PKTool * __tool;
    NSHashTable * _observers;
}

@property (nonatomic, readonly) NSDictionary *_dictionaryRepresentation;
@property (nonatomic, retain) PKTool *_tool;
@property (nonatomic, readonly) bool _toolShouldBeSetOnCanvasView;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_reloadImage;
- (void)_setColor:(id)arg1 shouldCallObserver:(bool)arg2;
- (void)_setWidth:(double)arg1 shouldCallObserver:(bool)arg2;
- (id)_tool;
- (id)_toolCopyWithColor:(id)arg1;
- (id)_toolCopyWithWidth:(double)arg1;
- (bool)_toolShouldBeSetOnCanvasView;
- (void)_updateTool:(id)arg1 shouldCallObserver:(bool)arg2;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithTool:(id)arg1;
- (id)initWithTool:(id)arg1 identifier:(id)arg2;
- (bool)isEqual:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setWidth:(double)arg1;
- (void)set_tool:(id)arg1;
- (double)width;

@end