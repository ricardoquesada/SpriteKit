/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPath;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double dx;
    double dy;
};

struct SKCAction {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
};

struct SKCAnimate {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    struct vector<SKTexture *, std::__1::allocator<SKTexture *>> _field19;
    double _field20;
    id _field21;
    CDStruct_b2fbf00d _field22;
    _Bool _field23;
    _Bool _field24;
};

struct SKCColorize {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    CDStruct_83984b6f _field19;
    float _field20;
    CDStruct_83984b6f _field21;
    float _field22;
    CDStruct_83984b6f _field23;
    float _field24;
    _Bool _field25;
};

struct SKCCustomAction {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    id _field19;
    void _field20;
};

struct SKCEmitterSprite {
    void **_field1;
    id _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    _Bool _field3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    float _field4;
    struct SKCSprite *_field5;
    id _field6;
    _Bool _field7;
    _Bool _field8;
    struct __CVBuffer *_field9;
    struct __CVBuffer *_field10;
    struct __CVOpenGLESTextureCache *_field11;
    id _field12;
    id _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    CDStruct_b2fbf00d _field17;
    CDStruct_b2fbf00d _field18;
    CDStruct_b2fbf00d _field19;
    CDStruct_c7fe8b62 _field20;
    _Bool _field21;
    struct __CVBuffer *_field22;
    struct __CVBuffer *_field23;
    _Bool _field24;
    CDStruct_50983af4 _field25;
    CDStruct_183601bc *_field26;
    CDStruct_183601bc *_field27;
    CDStruct_31cefc2d _field28;
    CDStruct_c7fe8b62 _field29;
    long long _field30;
    CDStruct_c7fe8b62 _field31;
    struct SKCSprite *_field32;
    union _GLKMatrix4 _field33;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> _field34;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> *_field35;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> *_field36;
    unsigned int _field37;
    unsigned int _field38;
    _Bool _field39;
    struct list<SKCAction *, std::__1::allocator<SKCAction *>> _field40;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> _field41;
    struct unordered_set<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *>> _field42;
    float _field43;
    float _field44;
    float _field45;
    id _field46;
    CDStruct_b2fbf00d _field47;
    id _field48;
    _Bool _field49;
    CDStruct_c7fe8b62 _field50;
    CDStruct_b2fbf00d _field51;
    unsigned int _field52;
    CDStruct_b2fbf00d _field53;
    CDStruct_b2fbf00d _field54;
    float _field55;
    float _field56;
    float _field57;
    float _field58;
    float _field59;
    float _field60;
    CDStruct_83984b6f _field61;
    CDStruct_83984b6f _field62;
    float _field63;
    float _field64;
    float _field65;
    CDStruct_c7fe8b62 _field66;
    id _field67;
    struct SKCSprite *_field68;
    id _field69;
    struct SKCKeyframeSequence *_field70;
    struct SKCKeyframeSequence *_field71;
    struct SKCKeyframeSequence *_field72;
    struct SKCKeyframeSequence *_field73;
    struct SKCKeyframeSequence *_field74;
    unsigned long long _field75;
    unsigned long long _field76;
    int _field77;
    int _field78;
    struct vector<SKCParticle *, std::__1::allocator<SKCParticle *>> _field79;
    struct vector<SKCParticle *, std::__1::allocator<SKCParticle *>> _field80;
    double _field81;
    double _field82;
    double _field83;
    double _field84;
    struct CGSize _field85;
    float _field86;
    float _field87;
    CDStruct_83984b6f _field88;
    CDStruct_83984b6f _field89;
    CDStruct_83984b6f _field90;
    float _field91;
    float _field92;
    float _field93;
    CDStruct_b2fbf00d _field94;
    _Bool _field95;
    CDStruct_b2fbf00d _field96;
    CDStruct_b2fbf00d _field97;
    float _field98;
    float _field99;
    float _field100;
    float _field101;
    CDStruct_b2fbf00d _field102;
    float _field103;
    float _field104;
    float _field105;
    float _field106;
    float _field107;
    float _field108;
    float _field109;
    float _field110;
    float _field111;
    float _field112;
    float _field113;
    float _field114;
    id _field115;
    long long _field116;
};

struct SKCFade {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    _Bool _field22;
};

struct SKCFollowPath {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    unsigned int _field20;
    CDStruct_183601bc *_field21;
    CDStruct_b2fbf00d _field22;
    _Bool _field23;
    _Bool _field24;
};

struct SKCGroup {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    struct list<SKCAction *, std::__1::allocator<SKCAction *>> _field19;
};

struct SKCKeyframeSequence {
    void **_field1;
    int _field2;
    int _field3;
    long long _field4;
    long long _field5;
    float *_field6;
    float *_field7;
};

struct SKCMove {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    CDStruct_b2fbf00d _field20;
    CDStruct_b2fbf00d _field21;
    CDStruct_b2fbf00d _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
};

struct SKCPlaySound {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    id _field19;
    _Bool _field20;
    _Bool _field21;
};

struct SKCRenderPassNew {
    unsigned int _field1;
    union _GLKMatrix4 _field2;
    unsigned int _field3;
    unsigned long long _field4;
    unsigned int _field5;
    unsigned int _field6;
    long long _field7;
    CDStruct_c7fe8b62 _field8;
    _Bool _field9;
    _Bool _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
    _Bool _field14;
    _Bool _field15;
    _Bool _field16;
    _Bool _field17;
    CDStruct_482da59b _field18;
    _Bool _field19;
    _Bool _field20;
    _Bool _field21;
    _Bool _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
    unsigned int _field27;
    CDStruct_83984b6f _field28;
    id _field29;
    CDStruct_c7fe8b62 _field30;
    CDStruct_c7fe8b62 _field31;
    CDStruct_b2fbf00d _field32;
    float _field33;
    unsigned int _field34;
    _Bool _field35;
    char *_field36;
    id _field37;
};

struct SKCRenderer {
    int _field1[7];
    id _field2;
    id _field3;
    _Bool _field4;
    _Bool _field5;
    float _field6;
    float _field7;
    id _field8;
    id _field9;
    CDStruct_5b2e05ea _field10;
    CDStruct_5b2e05ea _field11;
    struct stack<PKRect, std::__1::deque<PKRect, std::__1::allocator<PKRect>>> _field12;
    struct stack<_GLKMatrix4, std::__1::deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4>>> _field13;
    struct stack<SKCTextureAttachment, std::__1::deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment>>> _field14;
    CDStruct_b2fbf00d _field15;
    CDStruct_b2fbf00d _field16;
    struct SKCRenderPassNew _field17;
    unsigned int _field18;
    int _field19;
    int _field20;
    float _field21;
    int _field22;
    double _field23;
    unsigned long long _field24;
    unsigned long long _field25;
    unsigned long long _field26;
    unsigned long long _field27;
    unsigned long long _field28;
    unsigned long long _field29;
    float _field30;
    float _field31;
    unsigned int _field32;
    unsigned int _field33;
    double _field34;
    float _field35;
    unsigned int _field36;
    int _field37;
    id _field38;
    id _field39;
    id _field40;
    id _field41;
    _Bool _field42;
    _Bool _field43;
    _Bool _field44;
    struct list<SKCRenderPassNew, std::__1::allocator<SKCRenderPassNew>> _field45;
    unsigned int _field46;
    unsigned int _field47;
    unsigned short *_field48;
    CDStruct_50983af4 _field49[10500];
    unsigned int _field50;
    unsigned int _field51;
    unsigned int _field52;
    unsigned int _field53;
    unsigned int _field54;
    unsigned int _field55;
    unsigned int _field56;
    unsigned int _field57;
    unsigned int _field58;
    id _field59;
    int _field60;
    unsigned int _field61;
    unsigned int _field62;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> _field63;
    struct vector<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *>> _field64;
    struct vector<SKCRenderer::SpriteRenderInfo, std::__1::allocator<SKCRenderer::SpriteRenderInfo>> _field65;
    struct SKRenderQuadPool _field66;
    id _field67;
    _Bool _field68;
    _Bool _field69;
    _Bool _field70;
    _Bool _field71;
    _Bool _field72;
    _Bool _field73;
    _Bool _field74;
    _Bool _field75;
    _Bool _field76;
    _Bool _field77;
};

struct SKCRepeat {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    struct SKCAction *_field19;
    unsigned long long _field20;
    unsigned long long _field21;
    _Bool _field22;
};

struct SKCResize {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    CDStruct_b2fbf00d _field20;
    CDStruct_b2fbf00d _field21;
    CDStruct_b2fbf00d _field22;
    _Bool _field23;
    _Bool _field24;
    _Bool _field25;
    _Bool _field26;
};

struct SKCRotate {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    float _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
    _Bool _field32;
    _Bool _field33;
    _Bool _field34;
};

struct SKCScale {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    float _field24;
    float _field25;
    float _field26;
    float _field27;
    _Bool _field28;
    _Bool _field29;
    _Bool _field30;
    _Bool _field31;
};

struct SKCSequence {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    struct vector<SKCAction *, std::__1::allocator<SKCAction *>> _field19;
    unsigned long long _field20;
};

struct SKCShapeSprite {
    void **_field1;
    id _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    _Bool _field3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    float _field4;
    struct SKCSprite *_field5;
    id _field6;
    _Bool _field7;
    _Bool _field8;
    struct __CVBuffer *_field9;
    struct __CVBuffer *_field10;
    struct __CVOpenGLESTextureCache *_field11;
    id _field12;
    id _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    CDStruct_b2fbf00d _field17;
    CDStruct_b2fbf00d _field18;
    CDStruct_b2fbf00d _field19;
    CDStruct_c7fe8b62 _field20;
    _Bool _field21;
    struct __CVBuffer *_field22;
    struct __CVBuffer *_field23;
    _Bool _field24;
    CDStruct_50983af4 _field25;
    CDStruct_183601bc *_field26;
    CDStruct_183601bc *_field27;
    CDStruct_31cefc2d _field28;
    CDStruct_c7fe8b62 _field29;
    long long _field30;
    CDStruct_c7fe8b62 _field31;
    struct SKCSprite *_field32;
    union _GLKMatrix4 _field33;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> _field34;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> *_field35;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> *_field36;
    unsigned int _field37;
    unsigned int _field38;
    _Bool _field39;
    struct list<SKCAction *, std::__1::allocator<SKCAction *>> _field40;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> _field41;
    struct unordered_set<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *>> _field42;
    float _field43;
    float _field44;
    float _field45;
    id _field46;
    CDStruct_b2fbf00d _field47;
    id _field48;
    _Bool _field49;
    CDStruct_c7fe8b62 _field50;
    CDStruct_b2fbf00d _field51;
    unsigned int _field52;
    CDStruct_b2fbf00d _field53;
    CDStruct_b2fbf00d _field54;
    float _field55;
    float _field56;
    float _field57;
    float _field58;
    float _field59;
    float _field60;
    CDStruct_83984b6f _field61;
    CDStruct_83984b6f _field62;
    float _field63;
    float _field64;
    float _field65;
    CDStruct_c7fe8b62 _field66;
    id _field67;
    CDStruct_183601bc *_field68;
    CDStruct_83984b6f _field69;
    CDStruct_83984b6f _field70;
    int _field71;
    float _field72;
    _Bool _field73;
    struct CGPath *_field74;
    float _field75;
    _Bool _field76;
};

struct SKCSpeed {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
    float _field19;
    float _field20;
    float _field21;
    float _field22;
    float _field23;
    _Bool _field24;
    _Bool _field25;
};

struct SKCSprite {
    void **_field1;
    id _field2;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    _Bool _field3;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    unsigned int :1;
    float _field4;
    struct SKCSprite *_field5;
    id _field6;
    _Bool _field7;
    _Bool _field8;
    struct __CVBuffer *_field9;
    struct __CVBuffer *_field10;
    struct __CVOpenGLESTextureCache *_field11;
    id _field12;
    id _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    CDStruct_b2fbf00d _field17;
    CDStruct_b2fbf00d _field18;
    CDStruct_b2fbf00d _field19;
    CDStruct_c7fe8b62 _field20;
    _Bool _field21;
    struct __CVBuffer *_field22;
    struct __CVBuffer *_field23;
    _Bool _field24;
    CDStruct_50983af4 _field25;
    CDStruct_183601bc *_field26;
    CDStruct_183601bc *_field27;
    CDStruct_31cefc2d _field28;
    CDStruct_c7fe8b62 _field29;
    long long _field30;
    CDStruct_c7fe8b62 _field31;
    struct SKCSprite *_field32;
    union _GLKMatrix4 _field33;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> _field34;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> *_field35;
    struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> *_field36;
    unsigned int _field37;
    unsigned int _field38;
    _Bool _field39;
    struct list<SKCAction *, std::__1::allocator<SKCAction *>> _field40;
    struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> _field41;
    struct unordered_set<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *>> _field42;
    float _field43;
    float _field44;
    float _field45;
    id _field46;
    CDStruct_b2fbf00d _field47;
    id _field48;
    _Bool _field49;
    CDStruct_c7fe8b62 _field50;
    CDStruct_b2fbf00d _field51;
    unsigned int _field52;
    CDStruct_b2fbf00d _field53;
    CDStruct_b2fbf00d _field54;
    float _field55;
    float _field56;
    float _field57;
    float _field58;
    float _field59;
    float _field60;
    CDStruct_83984b6f _field61;
    CDStruct_83984b6f _field62;
    float _field63;
    float _field64;
    float _field65;
    CDStruct_c7fe8b62 _field66;
    id _field67;
};

struct SKCWait {
    void **_field1;
    float _field2;
    id _field3;
    _Bool _field4;
    double _field5;
    double _field6;
    float _field7;
    float _field8;
    double _field9;
    _Bool _field10;
    _Bool _field11;
    id _field12;
    void _field13;
    long long _field14;
    float _field15;
    float _field16;
    float _field17;
    float _field18;
};

struct SKRenderQuadPool {
    struct vector<SKRenderQuad *, std::__1::allocator<SKRenderQuad *>> _field1;
    unsigned long long _field2;
    unsigned long long _field3;
    CDStruct_183601bc *_field4;
    unsigned long long _field5;
};

struct SpriteRenderInfo;

struct __CVBuffer;

struct __CVOpenGLESTextureCache;

struct __hash_node<SKCAction *, void *>;

struct __list_node<SKCAction *, void *>;

struct __list_node<SKCRenderPassNew, void *>;

struct __list_node<SKCSprite *, void *>;

struct deque<PKRect, std::__1::allocator<PKRect>> {
    struct __split_buffer<PKRect *, std::__1::allocator<PKRect *>> {
        CDStruct_183601bc **_field1;
        CDStruct_183601bc **_field2;
        CDStruct_183601bc **_field3;
        struct __compressed_pair<PKRect **, std::__1::allocator<PKRect *>> {
            CDStruct_183601bc **_field1;
        } _field4;
    } _field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<PKRect>> {
        unsigned long long _field1;
    } _field3;
};

struct deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment>> {
    struct __split_buffer<SKCTextureAttachment *, std::__1::allocator<SKCTextureAttachment *>> {
        CDStruct_183601bc **_field1;
        CDStruct_183601bc **_field2;
        CDStruct_183601bc **_field3;
        struct __compressed_pair<SKCTextureAttachment **, std::__1::allocator<SKCTextureAttachment *>> {
            CDStruct_183601bc **_field1;
        } _field4;
    } _field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<SKCTextureAttachment>> {
        unsigned long long _field1;
    } _field3;
};

struct deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4>> {
    struct __split_buffer<_GLKMatrix4 *, std::__1::allocator<_GLKMatrix4 *>> {
        union _GLKMatrix4 **_field1;
        union _GLKMatrix4 **_field2;
        union _GLKMatrix4 **_field3;
        struct __compressed_pair<_GLKMatrix4 **, std::__1::allocator<_GLKMatrix4 *>> {
            union _GLKMatrix4 **_field1;
        } _field4;
    } _field1;
    unsigned long long _field2;
    struct __compressed_pair<unsigned long, std::__1::allocator<_GLKMatrix4>> {
        unsigned long long _field1;
    } _field3;
};

struct list<SKCAction *, std::__1::allocator<SKCAction *>> {
    struct __list_node_base<SKCAction *, void *> {
        struct __list_node<SKCAction *, void *> *_field1;
        struct __list_node<SKCAction *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<SKCRenderPassNew, std::__1::allocator<SKCRenderPassNew>> {
    struct __list_node_base<SKCRenderPassNew, void *> {
        struct __list_node<SKCRenderPassNew, void *> *_field1;
        struct __list_node<SKCRenderPassNew, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCRenderPassNew, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct list<SKCSprite *, std::__1::allocator<SKCSprite *>> {
    struct __list_node_base<SKCSprite *, void *> {
        struct __list_node<SKCSprite *, void *> *_field1;
        struct __list_node<SKCSprite *, void *> *_field2;
    } _field1;
    struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCSprite *, void *>>> {
        unsigned long long _field1;
    } _field2;
};

struct set<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> {
    struct __tree<SKCSprite *, std::__1::less<SKCSprite *>, std::__1::allocator<SKCSprite *>> {
        struct __tree_node<SKCSprite *, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<SKCSprite *, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::less<SKCSprite *>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct stack<PKRect, std::__1::deque<PKRect, std::__1::allocator<PKRect>>> {
    struct deque<PKRect, std::__1::allocator<PKRect>> _field1;
};

struct stack<SKCTextureAttachment, std::__1::deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment>>> {
    struct deque<SKCTextureAttachment, std::__1::allocator<SKCTextureAttachment>> _field1;
};

struct stack<_GLKMatrix4, std::__1::deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4>>> {
    struct deque<_GLKMatrix4, std::__1::allocator<_GLKMatrix4>> _field1;
};

struct unique_ptr<std::__1::__hash_node<SKCAction *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<SKCAction *, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>*>>> {
        struct __hash_node<SKCAction *, void *> **_field1;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>*>> {
                unsigned long long _field1;
            } _field1;
        } _field2;
    } _field1;
};

struct unordered_set<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *>> {
    struct __hash_table<SKCAction *, std::__1::hash<SKCAction *>, std::__1::equal_to<SKCAction *>, std::__1::allocator<SKCAction *>> {
        struct unique_ptr<std::__1::__hash_node<SKCAction *, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>*>>> _field1;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<SKCAction *, void *>*>, std::__1::allocator<std::__1::__hash_node<SKCAction *, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<SKCAction *, void *>*> {
                struct __hash_node<SKCAction *, void *> *_field1;
            } _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::hash<SKCAction *>> {
            unsigned long long _field1;
        } _field3;
        struct __compressed_pair<float, std::__1::equal_to<SKCAction *>> {
            float _field1;
        } _field4;
    } _field1;
};

struct vector<SKCAction *, std::__1::allocator<SKCAction *>> {
    struct SKCAction **_field1;
    struct SKCAction **_field2;
    struct __compressed_pair<SKCAction **, std::__1::allocator<SKCAction *>> {
        struct SKCAction **_field1;
    } _field3;
};

struct vector<SKCParticle *, std::__1::allocator<SKCParticle *>> {
    CDStruct_183601bc **_field1;
    CDStruct_183601bc **_field2;
    struct __compressed_pair<SKCParticle **, std::__1::allocator<SKCParticle *>> {
        CDStruct_183601bc **_field1;
    } _field3;
};

struct vector<SKCRenderer::SpriteRenderInfo, std::__1::allocator<SKCRenderer::SpriteRenderInfo>> {
    struct SpriteRenderInfo *_field1;
    struct SpriteRenderInfo *_field2;
    struct __compressed_pair<SKCRenderer::SpriteRenderInfo *, std::__1::allocator<SKCRenderer::SpriteRenderInfo>> {
        struct SpriteRenderInfo *_field1;
    } _field3;
};

struct vector<SKRenderQuad *, std::__1::allocator<SKRenderQuad *>> {
    CDStruct_183601bc **_field1;
    CDStruct_183601bc **_field2;
    struct __compressed_pair<SKRenderQuad **, std::__1::allocator<SKRenderQuad *>> {
        CDStruct_183601bc **_field1;
    } _field3;
};

struct vector<SKTexture *, std::__1::allocator<SKTexture *>> {
    id *_field1;
    id *_field2;
    struct __compressed_pair<SKTexture *__strong *, std::__1::allocator<SKTexture *>> {
        id *_field1;
    } _field3;
};

struct vector<const SKCRenderer::SpriteRenderInfo *, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *>> {
    struct SpriteRenderInfo **_field1;
    struct SpriteRenderInfo **_field2;
    struct __compressed_pair<const SKCRenderer::SpriteRenderInfo **, std::__1::allocator<const SKCRenderer::SpriteRenderInfo *>> {
        struct SpriteRenderInfo **_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

typedef struct {
    float r;
    float g;
    float b;
    float a;
} CDStruct_83984b6f;

typedef struct {
    float _field1;
    float _field2;
} CDStruct_b2fbf00d;

typedef struct CDStruct_183601bc;

typedef struct {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    CDStruct_b2fbf00d _field5;
    _Bool _field6;
} CDStruct_482da59b;

typedef struct {
    int type;
    float duration;
    CDStruct_83984b6f color;
} CDStruct_eed8e9f9;

typedef struct {
    CDStruct_b2fbf00d _field1;
    CDStruct_b2fbf00d _field2;
    CDStruct_b2fbf00d _field3;
    CDStruct_b2fbf00d _field4;
} CDStruct_31cefc2d;

typedef struct {
    CDStruct_b2fbf00d _field1;
    CDStruct_b2fbf00d _field2;
} CDStruct_c7fe8b62;

typedef struct {
    unsigned int _field1;
    CDStruct_c7fe8b62 _field2;
    unsigned int _field3;
    union _GLKMatrix4 _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    CDStruct_83984b6f _field8;
    long long _field9;
    CDStruct_b2fbf00d _field10;
    CDStruct_482da59b _field11;
} CDStruct_5b2e05ea;

typedef struct {
    struct {
        union _GLKVector4 _field1;
        unsigned char _field2[4];
        float _field3[3];
    } _field1[4];
} CDStruct_50983af4;

#pragma mark Named Unions

union _GLKMatrix4 {
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
        float _field7;
        float _field8;
        float _field9;
        float _field10;
        float _field11;
        float _field12;
        float _field13;
        float _field14;
        float _field15;
        float _field16;
    } _field1;
    float _field2[16];
};

union _GLKVector4 {
    CDStruct_83984b6f _field1;
    CDStruct_83984b6f _field2;
    CDStruct_83984b6f _field3;
    float _field4[4];
};

