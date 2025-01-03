/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PencilKit.framework/PencilKit
 */

@interface PKDetectionItem : NSObject <_PKDrawingDetectionItem> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __frame;
    double  __strokeWidth;
    NSUUID * _cachedUUID;
    PKDrawing * _drawing;
    UIBezierPath * _drawingSpaceBoundsPath;
    NSString * _identifier;
    UIColor * _inkColor;
    UIBezierPath * _itemSpaceBaselinePath;
    UIBezierPath * _itemSpaceBoundsPath;
    PKDetectionQueryItem * _queryItem;
    PKRecognitionSessionManager * _sessionManager;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _strokeBounds;
    bool  _validCachedUUID;
}

@property (nonatomic, readonly) UIBezierPath *_baselinePath;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _frame;
@property (nonatomic) double _strokeWidth;
@property (nonatomic, retain) NSUUID *cachedUUID;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic) PKDrawing *drawing;
@property (nonatomic, readonly) UIBezierPath *drawingSpaceBoundsPath;
@property (nonatomic, readonly) struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; } drawingToItemTransform;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, retain) UIColor *inkColor;
@property (nonatomic, retain) UIBezierPath *itemSpaceBaselinePath;
@property (nonatomic, retain) UIBezierPath *itemSpaceBoundsPath;
@property (nonatomic, retain) PKDetectionQueryItem *queryItem;
@property (nonatomic) PKRecognitionSessionManager *sessionManager;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } strokeBounds;
@property (nonatomic, readonly) UIColor *strokeColor;
@property (readonly) Class superclass;
@property (nonatomic) bool validCachedUUID;

- (void).cxx_destruct;
- (id)UUID;
- (id)_actionNameForActivation:(bool)arg1;
- (id)_baselinePath;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frame;
- (void)_generatePaths;
- (bool)_hitTest:(struct CGPoint { double x1; double x2; })arg1;
- (double)_strokeWidth;
- (id)_strokes;
- (id)cachedUUID;
- (id)drawing;
- (id)drawingSpaceBoundsPath;
- (struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })drawingToItemTransform;
- (void)handleTapForMenuForInteraction:(id)arg1 location:(struct CGPoint { double x1; double x2; })arg2 view:(id)arg3 viewTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg4 drawingTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg5;
- (id)identifier;
- (id)image;
- (id)initWithSessionManager:(id)arg1;
- (id)inkColor;
- (id)itemSpaceBaselinePath;
- (id)itemSpaceBoundsPath;
- (id)queryItem;
- (id)sessionManager;
- (void)setCachedUUID:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setInkColor:(id)arg1;
- (void)setItemSpaceBaselinePath:(id)arg1;
- (void)setItemSpaceBoundsPath:(id)arg1;
- (void)setQueryItem:(id)arg1;
- (void)setSessionManager:(id)arg1;
- (void)setStrokeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)setUUID:(id)arg1;
- (void)setValidCachedUUID:(bool)arg1;
- (void)set_frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)set_strokeWidth:(double)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })strokeBounds;
- (id)strokeColor;
- (bool)validCachedUUID;

@end
