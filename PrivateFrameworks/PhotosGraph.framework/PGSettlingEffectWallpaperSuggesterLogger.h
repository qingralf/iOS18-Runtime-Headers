/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

@interface PGSettlingEffectWallpaperSuggesterLogger : NSObject {
    NSObject<OS_os_log> * _loggingConnection;
}

- (void).cxx_destruct;
- (id)initWithLoggingConnection:(id)arg1;
- (void)logFilteringStatistics:(struct { int x1; int x2; int x3; int x4; struct { int x_5_1_1; int x_5_1_2; } x5; struct { int x_6_1_1; int x_6_1_2; int x_6_1_3; int x_6_1_4; int x_6_1_5; int x_6_1_6; int x_6_1_7; int x_6_1_8; int x_6_1_9; int x_6_1_10; int x_6_1_11; int x_6_1_12; int x_6_1_13; } x6; struct { int x_7_1_1; int x_7_1_2; int x_7_1_3; struct { int x_4_2_1; int x_4_2_2; int x_4_2_3; int x_4_2_4; int x_4_2_5; int x_4_2_6; } x_7_1_4; } x7; int x8; int x9; })arg1 assetGaterStatistics:(struct { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; int x10; })arg2;
- (void)logHighlightStatistics:(struct { int x1; int x2; int x3; struct { int x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; int x_4_1_5; int x_4_1_6; } x4; })arg1;
- (void)logPosterFilteringStatistics:(struct { int x1; int x2; })arg1;
- (void)logSettlingEffectScoreRequest:(int)arg1;
- (void)logStats:(int)arg1 reason:(id)arg2;

@end