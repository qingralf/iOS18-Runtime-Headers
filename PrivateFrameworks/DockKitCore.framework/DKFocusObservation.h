/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DockKitCore.framework/DockKitCore
 */

@interface DKFocusObservation : NSObject {
    unsigned long long  _detectionType;
    long long  _identifier;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rect;
    bool  _userFocusStrong;
}

@property (nonatomic) unsigned long long detectionType;
@property (nonatomic) long long identifier;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rect;
@property (nonatomic) bool userFocusStrong;

- (unsigned long long)detectionType;
- (long long)identifier;
- (id)initWithIdentifier:(long long)arg1 rect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 userFocusStrong:(bool)arg3 detectionType:(unsigned long long)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rect;
- (void)setDetectionType:(unsigned long long)arg1;
- (void)setIdentifier:(long long)arg1;
- (void)setRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setUserFocusStrong:(bool)arg1;
- (bool)userFocusStrong;

@end
