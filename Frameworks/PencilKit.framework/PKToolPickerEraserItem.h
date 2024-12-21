/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKToolPickerEraserItem : PKToolPickerItem

@property (nonatomic, readonly) PKEraserTool *eraserTool;

- (id)_dictionaryRepresentation;
- (id)_toolCopyWithWidth:(double)arg1;
- (bool)_toolShouldBeSetOnCanvasView;
- (id)eraserTool;
- (id)initWithEraserType:(long long)arg1;
- (id)initWithEraserType:(long long)arg1 width:(double)arg2;
- (double)width;

@end