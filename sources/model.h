#ifndef MODEL
#define MODEL

    int initModel(Model *model);
    int loadModel(char *mainPath, char *path, Model *model);
    int saveModel(char *path, Model *model);
    int freeModel(Model *model);
    int renderModel(Model *model, int mode);
    void renderMember(Model *model, int indexMemberToRender, int mode);
    int animateModel(Model *model, char *nameAnimation);
    int createModel(char *mainPath, char *path, Model *model);
    int openTexture(char *mainPath, Model *model);
    int stopAnimation(Model *model, char *nameAnimation);
    int searchAnimation(Model *model, char *animationName);
    void renderMember(Model *model, int indexMemberToRender, int mode);
    int resetModelAnimation(Model *model, char *animationName);

#endif
