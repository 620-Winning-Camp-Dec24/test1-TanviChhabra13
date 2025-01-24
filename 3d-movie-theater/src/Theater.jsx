import React from 'react';
import 'aframe';
import { Entity, Scene } from 'aframe-react';

const Theater = () => {
  const seatsConfig = [
    { row: 0, positions: [-6, -3, 0, 3, 6] },
    { row: -3, positions: [-7, -4, -1, 2, 5] },
    { row: -6, positions: [-8, -5, -2, 1, 4] },
  ];
  
  const colors = ['#FF6F61', '#FFB400', '#6CC1ED', '#8BC34A'];

  const renderSeats = (config) =>
    config.map(({ row, positions }, index) => (
      <Entity key={index} position={{ x: 0, y: 0, z: row }}>
        {positions.map((pos, i) => (
          <Entity
            key={i}
            geometry={{ primitive: 'cylinder', radius: 0.5, height: 0.5 }}
            material={{ color: colors[i % colors.length] }}
            position={{ x: pos, y: 0, z: 0 }}
          />
        ))}
      </Entity>
    ));

  return (
    <Scene>
      {/* Movie Screen */}
      <Entity
        geometry={{ primitive: 'plane', width: 30, height: 15 }}
        material={{ src: "url(/path-to-your-video.gif)" }}
        position={{ x: 0, y: 8, z: -25 }}
        rotation={{ x: 0, y: 0, z: 0 }}
      />

      {/* Stage */}
      <Entity
        geometry={{ primitive: 'box', width: 32, height: 0.5, depth: 3 }}
        material={{ color: '#2c2c2c' }}
        position={{ x: 0, y: 0.25, z: -25 }}
      />

      {/* Rows of Seats */}
      {renderSeats(seatsConfig)}

      {/* Lighting */}
      <Entity light={{ type: 'ambient', color: '#666' }} />
      <Entity
        light={{ type: 'spot', intensity: 1.2, color: '#fff' }}
        position={{ x: 0, y: 15, z: -15 }}
      />

      {/* Walls */}
      <Entity
        geometry={{ primitive: 'box', width: 80, height: 30, depth: 1 }}
        material={{ color: '#222' }}
        position={{ x: 0, y: 6, z: -40 }}
      />
      <Entity
        geometry={{ primitive: 'box', width: 1, height: 30, depth: 50 }}
        material={{ color: '#222' }}
        position={{ x: -40, y: 6, z: -25 }}
      />
      <Entity
        geometry={{ primitive: 'box', width: 1, height: 30, depth: 50 }}
        material={{ color: '#222' }}
        position={{ x: 40, y: 6, z: -25 }}
      />
      <Entity
        geometry={{ primitive: 'box', width: 80, height: 1, depth: 50 }}
        material={{ color: '#222' }}
        position={{ x: 0, y: 16, z: -25 }}
      />

      {/* Floor */}
      <Entity
        geometry={{ primitive: 'plane', width: 80, height: 50 }}
        material={{ color: '#333' }}
        position={{ x: 0, y: 0, z: -25 }}
        rotation={{ x: -90, y: 0, z: 0 }}
      />

      {/* Camera */}
      <Entity
        camera={{ active: true }}
        look-controls
        position={{ x: 0, y: 1.6, z: 5 }}
      />
    </Scene>
  );
};

export default Theater;
