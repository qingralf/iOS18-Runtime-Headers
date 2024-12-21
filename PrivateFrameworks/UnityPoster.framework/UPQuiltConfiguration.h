/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/UnityPoster.framework/UnityPoster
 */

@interface UPQuiltConfiguration : NSObject {
    bool  _isSnapshotConfiguration;
    double  _lineVariance;
    unsigned long long  _randomizationSeedValue;
    UPSeededRandomizer * _randomizer;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _timeBounds;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _viewport;
}

@property (nonatomic) bool isSnapshotConfiguration;
@property (nonatomic) double lineVariance;
@property (nonatomic) unsigned long long randomizationSeedValue;
@property (nonatomic, retain) UPSeededRandomizer *randomizer;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } timeBounds;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } viewport;

- (void).cxx_destruct;
- (id)initWithRandomizationSeedValue:(unsigned long long)arg1 viewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 timeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 lineVariance:(double)arg4;
- (bool)isSnapshotConfiguration;
- (double)lineVariance;
- (unsigned long long)randomizationSeedValue;
- (id)randomizer;
- (void)setIsSnapshotConfiguration:(bool)arg1;
- (void)setLineVariance:(double)arg1;
- (void)setRandomizationSeedValue:(unsigned long long)arg1;
- (void)setRandomizer:(id)arg1;
- (void)setTimeBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setViewport:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })timeBounds;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })viewport;

@end