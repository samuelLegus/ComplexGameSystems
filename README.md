AIEFramework
============

The AIE C++ OpenGL Framework, used by Advanced Diploma and Degree students.

Purpose:

  - A cross-platform (Windows, OSX, Linux) wrapper for a real-time OpenGL game loop.
  - OpenGL functionality should remain bare for students to learn as much as possible.
  - The ability to load textures and 3D models will be provided, but loaded model data will
    not automatically create OpenGL resources.
  - A helper class for easily drawing debug 2D/3D "widgets" will be provided so that basic 
    math ideas can be demonstrated, along with A.I. entities and physics, without the need to 
    load a model.

Dependencies:

  This project depends on the following 3rd-party libraries:

  - GLEW (for managing OpenGL extensions)
  - GLFW (for managing basic OpenGL window and controls)
  - GLM (for mathematics)
  - STB (for simple image loading)
  - FBX SDK 2015.1 (for the optional FBXLoader library for loading FBX models)
