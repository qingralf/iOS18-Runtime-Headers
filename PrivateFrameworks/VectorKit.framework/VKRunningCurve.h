/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRunningCurve : NSObject {
    bool  _courseValid;
    struct { 
        double mb[4][3]; 
    }  _mb;
    bool  _mbValid;
    struct { 
        struct optional<gm::Matrix<double, 3, 1>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[24]; 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } type; 
            } _value; 
        } position; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } coordinate; 
        double distance; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _p0;
    struct { 
        struct optional<gm::Matrix<double, 3, 1>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[24]; 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } type; 
            } _value; 
        } position; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } coordinate; 
        double distance; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _p1;
    struct { 
        struct optional<gm::Matrix<double, 3, 1>> { 
            bool _hasValue; 
            union ValueUnion { 
                unsigned char data[24]; 
                struct Matrix<double, 3, 1> { 
                    double _e[3]; 
                } type; 
            } _value; 
        } position; 
        struct PolylineCoordinate { 
            unsigned int index; 
            float offset; 
        } coordinate; 
        double distance; 
        struct Matrix<double, 3, 1> { 
            double _e[3]; 
        } tangent; 
        bool tangentValid; 
    }  _pu;
    double  _t0;
    double  _t1;
    double  _tu;
}

@property (nonatomic) bool courseValid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)appendPosition:(struct Matrix<double, 3, 1> { double x1[3]; })arg1 coordinate:(struct PolylineCoordinate { unsigned int x1; float x2; })arg2 atTime:(double)arg3;
- (bool)courseValid;
- (bool)hasStateAtTime:(double)arg1;
- (id)init;
- (void)reset;
- (void)setCourseValid:(bool)arg1;
- (struct { struct optional<gm::Matrix<double, 3, 1>> { bool x_1_1_1; union ValueUnion { unsigned char x_2_2_1[24]; struct Matrix<double, 3, 1> { double x_2_3_1[3]; } x_2_2_2; } x_1_1_2; } x1; struct PolylineCoordinate { unsigned int x_2_1_1; float x_2_1_2; } x2; double x3; struct Matrix<double, 3, 1> { double x_4_1_1[3]; } x4; bool x5; })stateAtTime:(double)arg1;

@end